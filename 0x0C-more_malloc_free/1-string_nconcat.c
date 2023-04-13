#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - check the code.
 * @s1: pointer
 * @s2: pointer
 * @n: variable
 * Return: pointer casted to the type void.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i;
	unsigned int l;
	int j;
	unsigned int q;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (l = 0; s2[l] != '\0' || l < n; l++)
		;
	p = (char *)malloc((i + l + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	j = 0;
	while (s1[j] != '\0')
	{
		p[j] = s1[j];
		j++;
	}
	for (q = 0; q < n; q++)
	{
		p[j] = s2[q];
		j++;
	}
	p[j] = '\0';
	return (p);
}
