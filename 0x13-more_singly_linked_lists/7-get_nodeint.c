#include "lists.h"

/**
* get_nodeint_at_index - Gets node value at index
* @head: Head of linked list
* @index: Required node position
* Return: Pointer to node at index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr = head;

	while (curr)
	{
		if (i == index)
			return (curr);

		curr = curr->next;
		i++;
	}

	return (NULL);
}
