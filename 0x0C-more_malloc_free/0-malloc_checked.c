#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check the code.
 * @b: variable
 * Return: pointer casted to the type void.
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = (void *)malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
