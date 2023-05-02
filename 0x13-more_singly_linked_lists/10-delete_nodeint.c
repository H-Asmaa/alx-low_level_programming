#include "lists.h"

/**
 * delete_nodeint_at_index - check the code.
 * @head: a pointer
 * @index: a variable
 * Return: Always count.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prv;
	unsigned int count;

	count = 1;
	tmp = *head;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (index == count)
		{
			prv = tmp;
			tmp = tmp->next;
			prv->next = tmp->next;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		count++;
	}
	return (-1);
}
