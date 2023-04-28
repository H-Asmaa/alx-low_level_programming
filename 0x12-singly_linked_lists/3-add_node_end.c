#include "lists.h"

/**
 * add_node_end - check the code.
 * @head: a double pointer
 * @str: string pointer
 * Return: Always the new.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp = *head;
	int count;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (count = 0; str[count]; count++)
		;
	new->len = count;
	new->next = NULL;
	if (tmp == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
