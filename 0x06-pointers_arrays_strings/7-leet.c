#include "main.h"

/**
 * leet - check the code
 * @str: pointer
 * Return: char.
 */
char *leet(char *str)
{
	int i;
	int j;
	char array1[] = {'4', '3', '0', '7', '1'};
	char array2[] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == array2[j] || str[i] == array2[j] - 32)
			{
				str[i] = array1[j];
			}
		}
	}
	return (str);
}
