#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - check the code.
 * @name: pointer
 * @f: function pointer
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
