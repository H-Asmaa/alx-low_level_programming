#include "lists.h"

/**
 * delete_dnodeint_at_index - check the code
 * @head: the head of the list
 * @index: index variable
 * Return: dlistint_t.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *current, *p;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		p = (*head);
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = NULL;
			*head = (*head)->next;
			free(p);
			return (1);
		}
		*head = NULL;
		free(p);
		return (1);
	}
	current = *head;
	while (current != NULL)
	{
		if (index == idx)
		{
			p = current;
			current->prev->next = current->next;
			current->next = current->prev;
			free(p);
			return (1);
		}
		current = current->next;
		idx++;
	}
	return (-1);
}
