#include "hash_tables.h"

/**
* free_list - Frees a linked list
* @h: Head of linked list
* Return: void
*/

void free_list(hash_node_t *h)
{
	hash_node_t *curr = h, *next = NULL;

	while (curr)
	{
		next = curr->next;
		free(curr->key);
		free(curr->value);
		free(curr);
		curr = next;
	}
}

/**
* hash_table_delete - Deletes a hash table
* @ht: Hash table
* Return: void
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
		free_list(ht->array[i]);

	free(ht->array);
	free(ht);
}

