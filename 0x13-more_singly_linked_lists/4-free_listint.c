#include "lists.h"

/**
 * free_listint - check the code.
 * @head: a pointer
 * Return: Always count.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
