#include "hash_tables.h"

/**
* get_value - Gets key value in linked list
* @h: Head of linked list
* @key: Key to retreive its value
* Return: String value
*/

char *get_value(const hash_node_t *h, const char *key)
{
	const hash_node_t *curr = h;

	while (key && curr)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);

		curr = curr->next;
	}

	return (NULL);
}

/**
* hash_table_get - Gets a key's value
* @ht: Hash table
* @key: Key parameter
* Return: String
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	return (get_value(ht->array[index], key));
}

