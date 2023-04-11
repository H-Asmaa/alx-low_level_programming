#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code.
 * @str: variable
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *p;
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	p = malloc(i + 1);
	if (p == NULL || i == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
