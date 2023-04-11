#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - check the code.
 * @size: variable
 * @c: variable
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (p == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
