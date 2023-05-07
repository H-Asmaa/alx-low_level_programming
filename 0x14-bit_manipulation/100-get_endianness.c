#include "main.h"

/**
 * get_endianness - check the code.
 * Return: int 1 o 0
 */
int get_endianness(void)
{
	unsigned int tmp;
	char *p;

	tmp = 0x12345678;
	p = (char *)&tmp;
	if (*p == 0x12)
		return (1);
	else
		return (0);
}
