#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum number of coins
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Integer - Success(0), Error(1)
 */

int main(int argc, char *argv[])
{
	int i, amount = 0, coins = 0;
	int denum[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	for (i = 0; amount > 0 && i < 5; i++)
	{
		if (amount >= denum[i])
		{
			while (amount >= denum[i])
			{
				amount -= denum[i];
				coins++;
			}
		}
	}

	printf("%d\n", coins);
	return (0);
}
