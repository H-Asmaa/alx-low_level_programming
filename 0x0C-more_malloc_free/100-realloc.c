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

	if (new_size == 0)
		free(ptr);
		return (NULL);

	if (ptr == NULL)
		return (malloc(new_size * sizeof(char)));

	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size * sizeof(char));
	if (p == NULL)
		return (NULL);

	if (new_size > old_size)
		tmp1 = old_size;
	else
		tmp1 = new_size;

	for (i = 0; i < tmp1 * sizeof(char); i++)
		p[i] = ((char *)ptr)[i];

	free(ptr);

	ptr = malloc(new_size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < new_size * sizeof(char); i++)
		((char *)ptr)[i] = p[i];

	free(p);

	return (ptr);
}
