/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else if (c <= 90 && c >= 65)
	{
		return (0);
	}
}