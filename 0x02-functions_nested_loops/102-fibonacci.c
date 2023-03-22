#include <stdio.h>

/**
 * main - check the code.
 * Description
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int a, b, c, i;
	a = 1;
	b = 2;
	printf("%lu,\n", a);
	printf("%lu,\n", b);
	for (i = 0; i < 49; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu,\n", c);
	}
	return (0);
}
