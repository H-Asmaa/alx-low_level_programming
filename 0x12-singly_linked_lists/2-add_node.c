#include "lists.h"

/**
 * add_node - check the code.
 * @head: a double pointer
 * @str: string pointer
 * Return: Always the new.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int count;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (count = 0; str[count] != '\0'; count++)
		;
	new->len = count;
	new->next = *head;
	*head = new;
	return (new);
}
