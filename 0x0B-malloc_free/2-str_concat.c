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
	int len1;
	int len2;

	len1 = 0;
	len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}
