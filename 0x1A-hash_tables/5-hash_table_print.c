#include "hash_tables.h"

/**
* print_list - Prints a linked list
* @h: Head of linked list
* Return: void
*/

void print_list(const hash_node_t *h)
{
	const hash_node_t *curr = h;
	int count = 0;

	while (curr)
	{
		if (count > 0)
			printf(", ");

		printf("'%s': '%s'", curr->key, curr->value);
		curr = curr->next;
		count++;
	}
}


/**
* hash_table_print - Prints a hash table
* @ht: Hash table parameter
* Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int printed = 0;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;

		if (i > 0 && printed)
			printf(", ");

		print_list(ht->array[i]);
		printed = 1;
	}

	printf("}\n");
}

