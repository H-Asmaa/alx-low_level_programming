#include "main.h"

/**
 * reverse_array - check the code
 * @a: pointer
 * @n: variable
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	for (i = n - 1, j = 0; i >= 0 && j < n / 2; i--, j++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
