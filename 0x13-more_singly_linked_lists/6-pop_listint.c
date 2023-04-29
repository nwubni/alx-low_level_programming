#include "lists.h"

/**
* pop_listint - Removes first node in list
* @head: Head of linked list
* Return: Value of head
*/

int pop_listint(listint_t **head)
{
	int val = 0;
	listint_t *temp;

	if (*head)
	{
		temp = (*head)->next;
		val = temp->n;
		*head = temp->next;

		free(temp);
	}

	return (val);
}
