#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - check the code.
 * @ptr: pointer
 * @old_size: variable
 * @new_size: variable
 * Return: pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return NULL;
	}

	if (ptr == NULL)
	{
		return malloc(new_size);
	}

	if (new_size == old_size)
	{
		return ptr;
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return NULL;
	}

	for (i = 0; i < old_size && i < new_size; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}

	free(ptr);

	return new_ptr;
}
