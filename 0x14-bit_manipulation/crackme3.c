#include <stdio.h>
#include <string.h>

int check_password(char *password)
{
	if (strlen(password) != 4)
	{
		return 0;
	}

	int var1 = 0x46c6f48;
	char var2 = 0xff;
	char var3 = 0x00;

	for (int i = 0; i <= 3; i++)
	{
		char c = password[i];
		int index = (c << 3) & 0xff;
		int shifted_var1 = var1 >> index;
		int and_result = shifted_var1 & (int)var2;

		if (and_result != (int)c)
		{
			return 0;
		}
	}

	return 1;
}

int main(int argc, char **argv)
{
	int cmp_result;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <password>\n", argv[0]);
		return 1;
	}

	cmp_result = check_password(argv[1]);

	if (cmp_result == 1)
	{
		puts("Access granted");
		return 0;
	}
	else
	{
		puts("Access denied");
		return 1;
	}
}
