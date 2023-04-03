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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = (s + i);
			return (s);
		}
	}
	return (NULL);
}