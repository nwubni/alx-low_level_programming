#include "main.h"

/**
* _memset - Fills memory
* @s: String parameter
* @b: Value to fill memory
* @n: Number of memory to fill
* Return: String
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
