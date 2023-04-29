#include "lists.h"

/**
* add_nodeint - Adds a node to head of list
* @head: Head of linked list
* @n: New node value
* Return: Pointer to list head
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}
