#include "lists.h"

/**
 * insert_nodeint_at_index - check the code.
 * @head: a pointer
 * @idx: a variable
 * @n: a variable
 * Return: Always count.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int compare;

	compare = 1;
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = *head;
	while (tmp != NULL)
	{
		if (compare == idx)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		compare++;
	}
	return (NULL);
}
