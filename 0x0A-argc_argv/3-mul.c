#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints product of two arguments
* @argc: Argument count
* @argv: Argument vector
* Return: Success - 0
*/

int main(int argc, char *argv[])
{
	if (argc > 2)
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	else
		printf("Error\n");

	return (0);
}
