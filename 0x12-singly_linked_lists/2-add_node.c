#include "lists.h"

/**
* add_node - Adds a node to a linked list
* @head: Head of linked list;
* @str: Node data
* Return: Pointer to head of new linked list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	new_head = malloc(sizeof(list_t));

	if (!new_head)
		return (NULL);

	new_head->len = strlen(str);
	new_head->str = strdup(str);
	new_head->next = *head;
	*head = new_head;

    return (*head);
}
