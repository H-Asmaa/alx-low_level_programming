#include "main.h"

/**
 * _strlen_recursion -return (*s != '\0' ? _strlen_recursion(s + 1) + 1 : 0); }
 * @s: pointer.
 * Return: void.
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')
		len = _strlen_recursion(s + 1) + 1;
	else
		len = 0;
	return (len);
}
