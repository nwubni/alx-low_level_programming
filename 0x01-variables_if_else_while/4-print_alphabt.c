#include <stdio.h>
/**
 * main - task
 * prints all English alphabets except e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	printf("\n");
	return (0);
}
