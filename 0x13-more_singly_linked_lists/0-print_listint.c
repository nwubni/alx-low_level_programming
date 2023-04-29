#include "lists.h"

/**
* print_listint - Prints linked list values
* @h: Linked list head
* Return: Number of linked list nodes
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *curr = h;
	size_t count = 0;

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		count++;
	}

	return (count);
}
