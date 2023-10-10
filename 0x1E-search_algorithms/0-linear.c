#include "search_algos.h"
#include <stddef.h>

/**
 * linear_search - A function that does linear search
 * @array: A pointer to the first element of the array to search in.
 * @size:  The number of elements in array.
 * @value: The value to search for.
 * Return: Always index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
