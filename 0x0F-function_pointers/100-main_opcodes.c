#include <stdio.h>
#include <stdlib.h>

#define Hex 0xFF

/**
 * main - check the code
 * @argc: parametre
 * @argv: parametre
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int tmp;
	char *p;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	tmp = atoi(argv[1]);
	if (tmp <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (char *)main;
	i = 0;
	while (i < tmp)
	{
		printf("%02x ", p[i] & Hex);
		i++;
	}
	printf("\n");
	return (0);
}
