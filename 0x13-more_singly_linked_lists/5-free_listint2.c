#include "lists.h"

/**
 * free_listint - check the code.
 * @head: a pointer
 * Return: Always count.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
