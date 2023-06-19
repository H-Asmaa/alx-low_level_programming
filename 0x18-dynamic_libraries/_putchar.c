#include <unistd.h>
/**
 * _putchar - putchar function
 *@c: char
 * Return: Always 0
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
