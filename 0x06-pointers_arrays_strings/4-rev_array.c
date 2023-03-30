#include "main.h"

/**
 * _strcmp - check the code
 * @s1: pointer destination
 * @s2: pointer source
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
