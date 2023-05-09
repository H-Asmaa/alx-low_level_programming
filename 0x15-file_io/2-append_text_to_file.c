#include "main.h"

/**
 * append_text_to_file - check the code.
 * @filename: a pointer
 * @text_content: a pointer
 * Return: return.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int tmp;
	int count;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_RDWR | O_APPEND, 0644);
	if (access(filename, F_OK) != 0)
		return (-1);
	if (f == -1)
		return (-1);
	count = 0;
	while (text_content != NULL && text_content[count] != '\0')
	{
		count++;
	}
	tmp = write(f, text_content, count);
	if (tmp == -1)
		return (-1);
	close(f);
	return (1);
}
