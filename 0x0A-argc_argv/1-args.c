#include <stdio.h>

/**
* main - Prints number of arguments
* @argc: Argument count
* @argv: Argument vector
* Return: Success - 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
