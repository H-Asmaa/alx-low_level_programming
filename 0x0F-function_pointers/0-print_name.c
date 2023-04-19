#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - check the code.
 * @name: pointer
 * @f: function pointer
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
