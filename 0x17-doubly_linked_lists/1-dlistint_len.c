#include "lists.h"

/**
 * dlistint_len - check the code
 * @h: the head of the list
 * Return: size_t.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;
	if (h != NULL)
		while (h != NULL)
		{
			nodes++;
			h = h->next;
		}
	return (nodes);
}
