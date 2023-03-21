/**
 * _islower - check the code.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}