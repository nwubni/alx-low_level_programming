#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - Inserts a node at idx of doubly linked list
* @h: Head of doubly linked list
* @idx: Insertion index
* @n: Insertion value
* Return: Pointer to new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos = 0;
	dlistint_t *new_node, *curr = *h;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	while (curr && curr->prev)
		curr = curr->prev;

	while (curr && curr->next && pos < (idx - 1))
	{
		curr = curr->next;
		pos++;
	}

	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (*h);
	}
	if (curr && pos == (idx - 1))
	{
		new_node->prev = curr;
		new_node->next = curr->next;

		if (curr->next)
			curr->next->prev = new_node;

		curr->next = new_node;

		return (new_node);
	}

	free(new_node);
	return (NULL);
}
