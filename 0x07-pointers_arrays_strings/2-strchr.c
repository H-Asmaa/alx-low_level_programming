#include "main.h"

/**
 * _strchr - check the code
 * @s: pointer.
 * @c: variable.
 * Return: char.
 */
char *_strchr(char *s, char c)
{
	int i;
	int *tmp = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			tmp = s;
			break;
		}
	}
	return (tmp);
}
