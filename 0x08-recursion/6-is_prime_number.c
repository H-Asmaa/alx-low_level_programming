#include "main.h"

/**
 * is_prime_numberBackup - check the code
 * @n: variable.
 * @i: variable.
 * Return: int.
 */
int is_prime_numberBackup(int n, int i)
{
	if (n <= 1)
		return (0);

	if (i == n)
		return (1);

	if (n % i == 0)
		return (0);
	return (is_prime_numberBackup(n, i + 1));
}
/**
 * is_prime_number - check the code
 * @n: variable.
 * Return: int.
 */
int is_prime_number(int n)
{
	return (is_prime_numberBackup(n, 2));
}
