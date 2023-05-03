#include "lists.h"

/**
 * reverse_listint - check the code.
 * @head: a double pointer
 * Return: Always count.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *tmp1;

	tmp = NULL;
	tmp1 = NULL;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = tmp1;
		tmp1 = (*head);
		(*head) = tmp;
	}
	(*head) = tmp1;
	return (*head);
}
