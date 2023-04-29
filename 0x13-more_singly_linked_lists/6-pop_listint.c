#include "lists.h"

/**
* pop_listint - Removes first node in list
* @head: Head of linked list
* Return: Value of head
*/

int pop_listint(listint_t **head)
{
	int val = 0;
	listint_t *curr = *head;
	listint_t *next;

	if (curr)
	{
		next = curr->next;
		val = curr->n;
		*head = next;

		free(curr);
	}

	return (val);
}
