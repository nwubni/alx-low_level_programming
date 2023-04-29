#include "lists.h"

/**
* insert_nodeint_at_index - Inserts node in list
* @head: Head of list
* @idx: Insertion index
* @n: Value to insert
* Return: Pointer to inserted node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr;
	listint_t *node;
	unsigned int i = 0;

	curr = *head;

	while (curr)
	{
		if ((i + 1) == idx)
		{
			node = malloc(sizeof(listint_t));

			if (!node)
				return (NULL);

			node->n = n;
			node->next = curr->next;
			curr->next = node;

			return (node);
		}

		curr = curr->next;

		i++;
	}

	return (NULL);
}
