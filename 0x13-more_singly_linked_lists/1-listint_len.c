#include "lists.h"

/**
* listint_len - Gets the length of linked list
* @h: Head of linked list
* Return: Number of nodes in linked list
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *curr = h;
	size_t count = 0;

	while (curr)
	{
		curr = curr->next;
		count++;
	}

	return (count);
}
