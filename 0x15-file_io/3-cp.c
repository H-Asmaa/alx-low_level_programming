#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * err_100 - check the code
 * @f: a variable
 * Return: none.
 */
void err_100(int f)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
	exit(100);
}
/**
 * main - check the code
 * @argv: parameter
 * @argc: parameter
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, write_f, read_f;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((read_f = read(f_from, buffer, 1024)) != 0)
	{
		if (read_f == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write_f = write(f_to, buffer, read_f);
		if (write_f != read_f)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(f_from) == -1)
		err_100(f_from);
	if (close(f_to) == -1)
		err_100(f_from);
	return (0);
}
