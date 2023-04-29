#include "lists.h"

/**
* free_listint2 - Frees memory of a list
* @head: Head of list passed by reference
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *temp;

	if (!(*head))
		return;

	while (curr)
	{
		temp = curr;
		curr = curr->next;

		free(temp);
	}

	*head = NULL;
}
