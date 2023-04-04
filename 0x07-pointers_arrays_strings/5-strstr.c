#include "main.h"

/**
 * _strstr - check the code
 * @haystack: pointer.
 * @needle: pointer.
 * Return: char.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
		{
			if (needle[j + 1] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}

	return (NULL);
}