#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>

/**
 * _putchar prints a character
 */
void _putchar(char ch)
{
	putchar(ch);
}

/**
 * print_alphabet - prints all lower case english alphabets
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
#endif
