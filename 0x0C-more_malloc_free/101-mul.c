#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
int *Our_printf(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	return (0);
}
int is_digit(char s)
{
	if (s >= '0' && s <= '9')
	{
		return (1);
	}
	return (0);
}
int main(int argc, char __attribute__((unused)) * argv[])
{
	int i;
	int j;
	int interior;
	int exterior;
	int submul;

	submul = 0;
	if (argc != 3)
	{
		Our_printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!is_digit(argv[i][j]))
			{
				Our_printf("Error\n");
				exit(98);
			}
		}
	}
	for (interior = 0; argv[i][interior]; interior++)
	{
		for (exterior = 0; argv[i][exterior]; exterior++)
		{
			char s1[2], s2[2];
			s1[0] = argv[i][interior];
			s1[1] = '\0';
			s2[0] = argv[i][exterior];
			s2[1] = '\0';
			submul = atoi(s1) * atoi(s2);
			printf("%d\n", submul);
		}
	}
	return (submul);
}
