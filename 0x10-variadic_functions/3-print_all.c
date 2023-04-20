#include "variadic_functions.h"

/**
 * print_all - check the code.
 * @format: A list of types of arguments passed to the function
 * Return: void.
 */
void print_all(const char *const format, ...)
{
	int i;
	char *ps, *separator = "";
	va_list arg;

	i = 0;
	va_start(arg, format);
	while (format != NULL && format[i] != '\0')
	{
		separator = "";
		switch (format[i])
		{
		case 'i':
			printf("%d", va_arg(arg, int));
			separator = ", ";
			break;
		case 'c':
			printf("%c", va_arg(arg, int));
			separator = ", ";
			break;
		case 'f':
			printf("%f", va_arg(arg, double));
			separator = ", ";
			break;
		case 's':
			ps = va_arg(arg, char *);
			separator = ", ";
			if (ps == NULL || ps[0] == '\0')
			{
				printf("(nil)");
				break;
			}
			printf("%s", ps);
			break;
		}
		i++;
		if (format[i] != '\0')
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
