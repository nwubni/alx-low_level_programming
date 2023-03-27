#include "main.h"

/**
* _strlen - Returns the length of string
* @s: String to process
* Return: Integer
*/
int _strlen(char *s)
{
	int i, len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	return len;
}
