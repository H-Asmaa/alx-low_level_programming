#include "lists.h"

/**
 * sum_listint - check the code.
 * @head: a pointer
 * Return: Always count.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
