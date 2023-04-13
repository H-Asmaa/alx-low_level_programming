#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - check the code.
 * @s1: pointer
 * @s2: pointer
 * @n: variable
 * Return: pointer casted to the type void.
 */
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1, len2, len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n > len2)
		n = len2;

	len = len1 + n + 1;
	p = (char *)malloc(len * sizeof(char));
	if (p == NULL)
		return NULL;

	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; j < n && s2[j] != '\0'; j++, i++)
	{
		p[i] = s2[j];
	}

	p[i] = '\0';

	return p;
}
