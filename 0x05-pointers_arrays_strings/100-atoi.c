#include "main.h"

/**
* _atoi - Converts string to integer
* @s: String parameter
* Return: Integer
*/
int _atoi(char *s)
{
	unsigned int n;
	int i, sign;

	n = 0;
	sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
			continue;
		}

		if (s[i] >= 48 && s[i] <= 57)
		{
			n = (n * 10) + (s[i] - '0');
			continue;
		}

		if (n > 0)
			break;
	}

	return (n * sign);
}
