#include <stdio.h>

/**
* main - Prints all program arguments
* @argc: Argument count
* @argc: Argument vector
* Return: Success - 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
