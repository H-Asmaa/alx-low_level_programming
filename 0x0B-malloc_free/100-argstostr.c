#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - check the code.
 * @ac: variable
 * @av: variable
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *p;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
		len++;
	}
	p = malloc(sizeof(char) * (len + 1));
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
