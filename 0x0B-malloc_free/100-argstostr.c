#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - check the code.
 * @ac: variable
 * @av: variable
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int len;
	char *p;

	len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][len] != '\0')
			len++;
		len++;
	}
	p = malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			p[len++] = av[i][j];

		p[len++] = '\n';
	}
	p[len] = '\0';
	return (p);
}
