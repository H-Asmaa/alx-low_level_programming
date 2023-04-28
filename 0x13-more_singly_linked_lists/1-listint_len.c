#include "lists.h"

/**
 * listint_len - check the code.
 * @h: a pointer
 * Return: Always count.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t count;

	count = 0;
	tmp = h;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
