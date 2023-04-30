#include "lists.h"

/**
 * print_listint - check the code.
 * @h: a pointer
 * Return: Always count.
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
