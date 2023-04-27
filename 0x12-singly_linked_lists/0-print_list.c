#include "lists.h"

/**
* print_list - Prints a linked list
* @h: Head of linked list
* Return: Size of linked list
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%d] ", (h->str ? h->len : 0));
		printf("%s\n", (h->str ? h->str : "(nil)"));
		h = h->next;
		count++;
	}

	return (count);
}
