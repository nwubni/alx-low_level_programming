#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int a, b, c;

	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);

	for (i = 2; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;

		if (i == 49)
			printf("%ld\n", c);
		else
			printf("%ld, ", c);
	}

	return (0);
}
