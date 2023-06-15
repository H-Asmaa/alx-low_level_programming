#include "lists.h"

/**
 * sum_dlistint - check the code
 * @head: the head of the list
 * Return: dlistint_t.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head != NULL)
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	return (sum);
}
