#include "lists.h"

/**
 * add_dnodeint_end - check the code
 * @head: the head of the list
 * @n: a variable
 * Return: dlistint_t.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	current = *head;
	while (current != NULL)
	{
		if (current->next == NULL)
		{
			current->next = new;
			new->prev = current;
			break;
		}
		current = current->next;
	}
	return (*head);
}
