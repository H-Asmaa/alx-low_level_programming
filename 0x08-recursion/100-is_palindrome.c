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
/**
 * is_palindromeBackUp - check the code
 * @s: pointer.
 * @i: variable.
 * @len: variable.
 * Return: int.
 */
int is_palindromeBackUp(char *s, int i, int len)
{
	if (i >= len)
		return (1);
	else if (s[i] == s[len])
		return (is_palindromeBackUp(s, i + 1, len - 1));
	return (0);
}
/**
 * is_palindrome - check the code
 * @s: pointer.
 * Return: int.
 */
int is_palindrome(char *s)
{
	int i;
	int len;

	i = 0;
	len = _strlen_recursion(s);

	return (is_palindromeBackUp(s, i, len - 1));
}
