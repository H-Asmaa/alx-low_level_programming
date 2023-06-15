#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code
 * @h: the head of the list
 * @idx: index variable
 * @n: variable
 * Return: dlistint_t.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current, *prv;
	unsigned int index = 0;

	while ((*h)->prev != NULL)
		*h = (*h)->prev;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	current = *h;
	while (current != NULL)
	{
		if (index == idx)
		{
			new->prev = current->prev;
			current->prev->next = new;
			current->prev = new;
			new->next = current;
			return (new);
		}
		index++;
		prv = current;
		current = current->next;
	}
	if (index == idx)
	{
		prv->next = new;
		new->prev = prv;
		new->next = NULL;
		return (new);
	}
	return (NULL);
}
