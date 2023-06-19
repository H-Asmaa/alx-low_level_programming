#include "main.h"
/**
 * _strspn - check the code
 * @s: pointer.
 * @accept: pointer.
 * Return: char.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (counter);
}
