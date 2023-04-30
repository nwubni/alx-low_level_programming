#include "lists.h"

/**
* reverse_listint - Function to reverse list
* @head: Head of list
* Return: Pointer to head of reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (prev);
}
