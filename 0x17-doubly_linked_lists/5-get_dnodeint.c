#include "lists.h"

/**
 * get_dnodeint_at_index - check the code
 * @head: the head of the list
 * @index: a variable
 * Return: dlistint_t.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node;
	dlistint_t *current;

	node = 0;
	current = head;
	if (head == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (index == node)
			return (current);
		current = current->next;
		node++;
	}
	return (NULL);
}
