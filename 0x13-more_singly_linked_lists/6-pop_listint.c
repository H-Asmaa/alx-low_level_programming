#include "lists.h"

/**
 * pop_listint - check the code.
 * @head: a pointer
 * Return: Always count.
 */
int pop_listint(listint_t **head)
{
	int fill;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	fill = (*head)->n;
	tmp = (*head);
	(*head) = tmp->next;
	free(tmp);
	return (fill);
}
