#include "main.h"

/**
 * print_rev - check the code
 * @s: pointer
 * Return: void.
 */
void print_rev(char *s)
{
	int i;
	int j;
	int count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (j = count; j > 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
