#include "lists.h"

/**
* print_listint_safe - Prints a linked list
* @head: Head of list
* Return: Number of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *check;
	size_t count = 0;

	while (head)
	{
		current = head;
		head = head->next;

		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		check = current->next;
		while (check && check < current)
		{
			printf("[%p] %d\n", (void *)check, check->n);
			count++;
			check = check->next;
		}

		if (check)
		{
			printf("-> [%p] %d\n", (void *)check, check->n);
			exit(98);
		}
	}

	return (count);
}
