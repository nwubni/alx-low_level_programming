#include "lists.h"

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
		printf("[%d] ", (curr->str ? curr->len : 0));
		printf("%s\n", (curr->str ? curr->str : "(nil)"));
		curr = curr->next;
		count++;
	}

	return (count);
}
