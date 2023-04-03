#include "main.h"

/**
* _memcpy - Copies n bytes from src
* to dest
* @dest: Destination string
* @src: Source string
* @n: Number of bytes to copy
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
