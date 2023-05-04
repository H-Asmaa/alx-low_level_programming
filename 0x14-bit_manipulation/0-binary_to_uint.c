#include "main.h"

/**
 * binary_to_uint - check the code.
 * @b: a pointer
 * Return: Always count.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	for (; *b != '\0'; b++)
	{
		if (*b == '0' || *b == '1')
		{
			decimal <<= 1;
			if (*b == '1')
				decimal += 1;
		}
		else
			return (0);
	}
	return (decimal);
}
