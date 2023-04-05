#include "main.h"

/**
 * _pow_recursion - check the code
 * @x: variable.
 * @y: variable.
 * Return: void.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y == 0 && x == 0)
		return (0);
	else
		return (1);
}
