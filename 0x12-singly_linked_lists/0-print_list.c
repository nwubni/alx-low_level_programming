#include "list.h"

/**
* print_list - Prints a linked list
* @h: Head of linked list
* Return: Size of linked list
*/

size_t print_list(const list_t *h)
{
	const list_t *curr = h;
	size_t count = 0;

	while (curr)
	{
		printf("[%d] %s\n", curr->len, (curr->str ? curr->str : "(nil)"));
		curr = curr->next;
		count++;
	}

	return (count);
}
