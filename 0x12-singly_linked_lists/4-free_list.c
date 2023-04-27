#include "lists.h"

/**
* free_list - Frees a linked list's memory
* @head: Head of linked list
* Return: void
*/

void free_list(list_t *head)
{
	list_t *temp = head;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
