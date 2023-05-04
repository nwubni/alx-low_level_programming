#include "main.h"

/**
* get_bit - Gets the bit of number at an index
* @n: Number parameter to retrieve bit from
* @index: Index to retrive bit
* Return: Integer
*/

int get_bit(unsigned long int n, unsigned int index)
{
	while (n && index)
	{
		n >>= 1;
		index--;
	}

	if (!n)
		return (-1);

	return (n & 1);
}
