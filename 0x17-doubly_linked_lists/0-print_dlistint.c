#include "lists.h"
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *curr = h;

	while (curr)
	{
		printf("%d\n", curr->n);
		nodes++;
		curr = curr->next;
	}

	return (nodes);
}
