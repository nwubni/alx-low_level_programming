#include "lists.h"

/**
* delete_nodeint_at_index - Deletes node in list
* @head: Head of list
* @index: Deletion index
* Return: Success(1) Fail(-1)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr;
	listint_t *node;
	unsigned int i = 0;

	curr = *head;

	while (curr && (i + 1) < index)
	{
		curr = curr->next;
		i++;
	}

	if (curr && index == 0)
	{
		node = *head;
		*head = curr->next;

		free(node);
		return (1);
	}

	if ((i + 1) == index && curr && curr->next)
	{
		node = curr->next;
		curr->next = curr->next->next;

		free(node);
		return (1);
	}

	return (-1);
}
