#include "main.h"

/**
 * reset_to_98 - check the code
 * @n: variable
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}