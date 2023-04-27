#include "lists.h"

/**
* list_len - Gets the length a linked list
* @h: Head of linked list
* Return: Size of linked list
*/

size_t list_len(const list_t *h)
{
	const list_t *curr = h;
	size_t len = 0;

	while (curr)
	{
		curr = curr->next;
		len++;
	}

	return (len);
}
