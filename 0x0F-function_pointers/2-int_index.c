#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - check the code.
 * @array: pointer
 * @size: variable
 * @cmp: function pointer
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int tmp;

	if (size <= 0)
		return (-1);
	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			tmp = cmp(array[i]);
			if (tmp != 0)
				return (i);
		}
	}
	return (-1);
}
