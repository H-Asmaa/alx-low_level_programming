#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code.
 * @s1: pointer
 * @s2: pointer
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i;
	int j;

	i = 0;
	j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	p = malloc(sizeof(char) * (i + j));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}
