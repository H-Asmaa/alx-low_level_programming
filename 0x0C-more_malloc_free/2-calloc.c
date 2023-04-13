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
	int *p;
	unsigned int i;

	for (i = 0; i < nmemb; i++)
	{
		p = (void *)malloc(size * sizeof(int));
	}
	return (p);
}
