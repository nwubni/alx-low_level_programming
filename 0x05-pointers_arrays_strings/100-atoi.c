#include "main.h"

/**
* _atoi - Converts string to integer
* @s: String parameter
* Return: Integer
*/
int _atoi(char *s)
{
	int i, n, sign;

	n = 0;
	sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
			continue;
		}

		if (s[i] == '+')
			continue;

		n = (n * 10) + (s[i] - '0');
	}

	return (n * sign);
}
