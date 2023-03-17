#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * prints all English alphabets in lower and uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	printf("\n");
	return (0);
}
