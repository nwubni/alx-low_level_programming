#include "hash_tables.h"

/**
* key_index - Returns an array index from key
* @key: Key parameter
* @size: Array size
* Return: Long integer
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
