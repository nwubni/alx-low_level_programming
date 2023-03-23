#include <stdio.h>

/**
* main- main program
* Return: 0
*/
int main(void)
{
	int i;

	i = 1;
	printf("%d", i);

	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
			continue;
		}

		if (i % 3 == 0)
		{
			printf(" Fizz");
			continue;
		}

		if (i % 5 == 0)
		{
			printf(" Buzz");
			continue;
		}

		printf(" %d", i);
	}

	putchar('\n');

	return (0);
}
