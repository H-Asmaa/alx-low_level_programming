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
	char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = (void *)malloc(new_size * sizeof(int));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		p = malloc(old_size * sizeof(int));
		if (p == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
		{
			((char *)p)[i] = ((char *)ptr)[i];
		}
		free(ptr);
		ptr = (void *)malloc((new_size + old_size) * sizeof(int));
		for (i = 0; i < old_size; i++)
		{
			((char *)ptr)[i] = ((char *)p)[i];
		}
		free(p);
		return (ptr);
	}
	return (ptr);
}
