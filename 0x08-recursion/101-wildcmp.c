#include "main.h"

/**
 * wildcmp - check the code.
 * @s1: pointer.
 * @s2: pointer.
 * Return: void.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
	{
		/************/
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
		else if (*s1 == '\0' && *s2 == '\0')
			return (1);
		return (0);
		/************/
	}
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
