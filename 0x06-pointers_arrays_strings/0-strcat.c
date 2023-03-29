#include "main.h"

/**
 * reset_to_98 - check the code
 * @dest: pointer destination
 * @src: pointer source
 * Return: void.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
