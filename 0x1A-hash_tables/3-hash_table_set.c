#include "hash_tables.h"

/**
* key_exists - Checks if key is in linked list
* @h: Head of linked list
* @key: Key to retreive its value
* Return: Pointer to key
*/

hash_node_t *key_exists(hash_node_t *h, const char *key)
{
	hash_node_t *curr = h;

	while (key && curr)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr);

		curr = curr->next;
	}

	return (NULL);
}

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
	hash_node_t *exists = NULL;

	if (!key || *key == '\0' || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	exists = key_exists(ht->array[index], key);

	if (exists)
	{
		exists->value = strdup(value);
		return (1);
	}

	return (add_node(&ht->array[index], key, value));
}

