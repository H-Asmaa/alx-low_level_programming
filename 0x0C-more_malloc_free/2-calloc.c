#include "main.h"
#include <stdlib.h>

/**
 * _calloc - check the code.
 * @nmemb: pointer
 * @size: pointer
 * Return: pointer casted to the type void.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (p);
}
