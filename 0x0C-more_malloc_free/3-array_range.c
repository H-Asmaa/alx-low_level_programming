#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - check the code.
 * @min: variable
 * @max: variable
 * Return: pointer.
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
