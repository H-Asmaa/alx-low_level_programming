#include "lists.h"

/**
 * print_listint_safe - check the code.
 * @head: a double pointer
 * Return: Always count.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	const listint_t *runner;
	size_t count = 0;

	current = head;
	while (current)
	{
		runner = head;
		while (runner != current)
		{
			if (runner == current->next)
			{
				printf("[%p] %d\n", (void *)current, current->n);
				return (count);
			}
			runner = runner->next;
		}
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		count++;
	}
	return (count);
}
