#include "main.h"

/**
 * _strstr - check the code
 * @haystack: pointer.
 * @needle: pointer.
 * Return: char.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (j = 0; needle[j] != '\0'; j++)
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (haystack[i] == needle[j])
			{
				return (haystack + i);
			}
		}
	}
	return ('\0');
}
