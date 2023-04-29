#include "lists.h"

/**
* sum_listint - Sums values of linked list
* @head: Head of linked list
* Return: Total sum of node values
*/

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
