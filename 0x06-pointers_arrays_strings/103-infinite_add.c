#include "main.h"
#include <string.h>

/**
* infinite_add - Adds strings
* @n1: First number
* @n2: Second number
* @r: Buffer to store result
* @size_r: Buffer size
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, len, d1, d2, sum, carry = 0, i = 0;

	len1 = strlen(n1) - 1;
	len2 = strlen(n2) - 1;

	len = (len1 >= len2 ? len1 : len2) + 2;

	if (size_r <= len)
		return (0);

	while (len1 >= 0 || len2 >= 0 || carry)
	{
		if (i >= size_r)
			return (0);

		d1 = len1 >= 0 ? n1[len1] - '0' : 0;
		d2 = len2 >= 0 ? n2[len2] - '0' : 0;
		sum = d1 + d2 + carry;

		r[i] = (sum % 10) + '0';
		carry = sum / 10;

		i++;
		len1--;
		len2--;
	}

	r[i] = '\0';
	size_r = i;

	for (i = 0; i < (size_r / 2); i++)
	{
		carry = r[i];
		r[i] = r[size_r - i - 1];
		r[size_r - i - 1] = carry;
	}

	return (r);
}
