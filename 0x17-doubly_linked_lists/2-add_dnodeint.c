#include "lists.h"

/**
 * add_dnodeint - check the code
 * @head: the head of the list
 * @n: a variable
 * Return: dlistint_t.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	new->next = *head;
	(*head)->prev = new;
	new->prev = NULL;
	*head = new;
	return (*head);
}
