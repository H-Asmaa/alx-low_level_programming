#include "main.h"

int main(int argc, char *argv[])
{
	int count;
	char buffer[150];
	int f;
	int s;
	int tmp;

	if (argc != 3)
	{
		write(STDOUT_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	if (access(argv[1], F_OK) != 0)
	{
		count = sprintf(buffer, "Error: Can't read from file %s\n", argv[1]);
		write(STDOUT_FILENO, buffer, count);
		exit(98);
	}

	if (access(argv[2], F_OK) == 0)
	{
		f = open(argv[2], O_WRONLY | O_TRUNC, 644);
		if (f == -1)
			return (-1);
		s = open(argv[1], O_RDONLY, 644);
		if (s == -1)
			return (-1);
		/*Copying the content of file from to file to (STILL IN PROCESS)*/
		tmp = read(argv[1], buffer, sizeof(150));

		close(f);
	}
	else
	{
		count = sprintf(buffer, "Error: Can't write to %s\n", argv[2]);
		write(STDOUT_FILENO, buffer, count);
		exit(99);
	}
	return (0);
}
