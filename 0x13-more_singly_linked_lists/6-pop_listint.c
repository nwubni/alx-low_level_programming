#include "lists.h"

/**
* pop_listint - Removes first node in list
* @head: Head of linked list
* Return: Value of head
*/

int pop_listint(listint_t **head)
{
	int val = 0;

	if (*head)
	{
		val = (*head)->n;
		*head = (*head)->next;
	}

	return (val);
}
