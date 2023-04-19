#include "function_pointers.h"
/**
 * array_iterator - check the code.
 * @array: pointer
 * @action: function pointer
 * @size: The size of an object in bytes
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
