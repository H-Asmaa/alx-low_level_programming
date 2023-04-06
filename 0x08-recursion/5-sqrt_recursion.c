#include "main.h"

/**
 * _sqrt_recursion_backup - check the code
 * @n: variable.
 * @tmp: variable.
 * Return: int.
 */
int _sqrt_recursion_backup(int n, int tmp)
{
	if (tmp * tmp > n)
		return (-1);
	else if (tmp * tmp == n)
		return (tmp);
	else
		return (_sqrt_recursion_backup(n, tmp + 1));
}
/**
 * _sqrt_recursion - check the code
 * @n: variable.
 * Return: int.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (_sqrt_recursion_backup(n, 2));
}
