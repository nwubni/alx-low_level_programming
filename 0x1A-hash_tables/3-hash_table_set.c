#include "hash_tables.h"

/**
* add_node - Adds a node to a linked list
* @head: Head of linked list;
* @key: Node key data
* @val: Node key value data
* Return: int
*/

int add_node(hash_node_t **head, const char *key, const char *val)
{
	hash_node_t *new_head;

	new_head = malloc(sizeof(hash_node_t));

	if (!new_head)
		return (0);

	new_head->key = strdup(key);
	new_head->value = strdup(val);
	new_head->next = *head;
	*head = new_head;

	return (1);
}

/**
* hash_table_set - Adds an element to a hash table
* @ht: Hash table
* @key: Key parameter
* @value: Value parameter
* Return: Integer
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!key || *key == '\0' || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	return (add_node(&ht->array[index], key, value));
}

