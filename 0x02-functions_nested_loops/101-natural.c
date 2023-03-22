#include <stdio.h>

/**
 * main - check the code.
 * Description
 * Return: Always 0.
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 1024; i >= 0; i--)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
