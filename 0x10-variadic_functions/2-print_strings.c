#include "variadic_functions.h"

/**
 * print_strings - check the code.
 * @separator: is the string to be printed between strings
 * @n: const variable
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(arg, char *);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
