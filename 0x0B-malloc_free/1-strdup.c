#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - check the code.
 * @str: variable
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int counter;
	char *p;
	
	counter = 0;
	while (*str >= '\n')
	{
		str++;
		counter++;
	}
	
	p = malloc(sizeof(char) * counter);
	return (p);
}
