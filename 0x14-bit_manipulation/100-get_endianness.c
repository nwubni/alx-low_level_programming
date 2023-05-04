#include "main.h"

/**
* get_endianness - Checks endianness
* Return: Integer
*/

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;
	return (*c == 1);
}

