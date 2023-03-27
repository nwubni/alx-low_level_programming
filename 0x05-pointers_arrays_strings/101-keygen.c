#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random password
 *
 * Return: Always success.
 */
int main(void)
{
	char c;
	int val;

	val = 0;
	srand(time(0));

	while (val <= 2645)
	{
		c = rand() % 128;
		val += c;
		putchar(c);
	}

	putchar(2772 - val);

	return (0);
}
