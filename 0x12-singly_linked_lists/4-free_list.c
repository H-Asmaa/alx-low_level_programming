#include "lists.h"

/**
 * free_list - check the code.
 * @head: a double pointer
 * Return: Always the new.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (tmp)
	{
		free(head->str);
		free(head);
		tmp = tmp->next;
	}
}
