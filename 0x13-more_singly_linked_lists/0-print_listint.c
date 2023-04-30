#include "lists.h"

/**
 * print_listint - check the code.
 * @h: a pointer
 * Return: Always count.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t count;

	tmp = h;
	count = 0;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
