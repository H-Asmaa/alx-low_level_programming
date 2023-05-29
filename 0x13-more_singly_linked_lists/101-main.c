#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *head2;
    listint_t *node;

    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);
    print_listint_safe(head2);
    head = NULL;
    node = add_nodeint(&head, 0);
    /*add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    node->next = add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint_safe(head);*/
    return (0);
}

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
