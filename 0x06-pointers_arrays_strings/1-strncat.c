#include "main.h"

/**
 * _strncat - check the code
 * @dest: pointer destination
 * @src: pointer source
 * @n: variable
 * Return: void.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		if (n >= 0)
		{
			dest[i] = src[j];
			n--;
		}
	}
	return (dest);
}
