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
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] != '\0' && isdigit(argv[i][0]))
		{
			sum += atoi(argv[i]);
			continue;
		}

		printf("Error\n");
		return (1);
	}

	printf("%d\n", sum);

	return (0);
}
