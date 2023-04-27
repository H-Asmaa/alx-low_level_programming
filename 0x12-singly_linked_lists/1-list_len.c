#include "lists.h"

/**
 * list_len - check the code.
 * @h: a pointer
 * Return: Always count.
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	int count;

	count = 0;
	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
