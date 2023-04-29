#include "lists.h"

/**
* add_nodeint_end - Adds a node to end of list
* @head: Head of linked list
* @n: New node value
* Return: Pointer to head of list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr = *head;
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!curr)
	{
		*head = node;
		return (*head);
	}

	while (curr && curr->next)
		curr = curr->next;

	curr->next = node;

	return (*head);
}
