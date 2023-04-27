#include "lists.h"

/**
 * print_list - check the code.
 * @h: a pointer
 * Return: Always count.
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	int count;

	count = 0;
	tmp = h;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%d] ", tmp->len);
			printf("%s", tmp->str);
		}
		tmp = tmp->next;
		printf("\n");
		count++;
	}
	return (count);
}
