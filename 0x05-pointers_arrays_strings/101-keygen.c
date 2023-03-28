#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * reset_to_98 - check the code
 * Return: void.
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}