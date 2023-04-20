#include "variadic_functions.h"

/**
 * sum_them_all - check the code.
 * @n: const variable
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list arg;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
