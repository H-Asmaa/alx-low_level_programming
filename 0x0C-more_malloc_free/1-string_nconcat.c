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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0, l = 0; s1[i] != '\0' || l < n; i++, l++)
		;
	p = (char *)malloc((i + l + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	j = 0;
	while (*s1)
	{
		p[j++] = *s1++;
	}
	while (n-- > 0 && *s2)
	{
		p[j++] = *s2++;
	}
	p[j] = '\0';
	return (p);
}
