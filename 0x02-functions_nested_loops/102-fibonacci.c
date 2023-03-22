#include <stdio.h>

/**
 * main - check the code.
 * Description
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int a;
	unsigned long int b;
	unsigned long int c;
	unsigned long int i;

	a = 1;
	b = 2;
	printf("%lu, ", a);
	printf("%lu, ", b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
		if (i != 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
