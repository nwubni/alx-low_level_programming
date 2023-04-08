#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Prints sum of program arguments
* @argc: Argument count
* @argv: Argument vector
* Return: Integer- Success(0), Error(1)
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][0]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
