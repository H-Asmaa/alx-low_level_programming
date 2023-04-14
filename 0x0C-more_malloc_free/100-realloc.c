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
	unsigned int tmp1;

	if (ptr == NULL)
		return ((void *)malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		tmp1 = old_size;
	else
		tmp1 = new_size;
	p = malloc(tmp1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < tmp1; i++)
	{
		((char *)p)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	ptr = (void *)malloc(new_size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < tmp1; i++)
	{
		((char *)ptr)[i] = ((char *)p)[i];
	}
	free(p);
	return (ptr);
}
