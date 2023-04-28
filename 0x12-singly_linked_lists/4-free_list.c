#include "lists.h"

/**
 * free_list - check the code.
 * @head: a double pointer
 * Return: Always the new.
 */
void free_list(list_t *head)
{
	list_t *tmp, *tmp1;

	tmp = head;
	while (tmp)
	{
		free(tmp->str);
		tmp1 = tmp->next;
		free(tmp);
		tmp = tmp1;
	}
}
