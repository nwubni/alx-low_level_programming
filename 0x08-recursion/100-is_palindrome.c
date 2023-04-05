#include "main.h"
#include <string.h>

/**
* helper - Helper function
* @s: Input string
* @l: Left pointer
* @r: Right pointer
* Return: Integer
*/

int helper(char *s, int l, int r)
{
	if (l >= r)
		return (1);

	if (s[l] != s[r])
		return (0);

	return (helper(s, l + 1, r - 1));
}

/**
* is_palindrome - Checks if a s is a palindrome
* @s: Input string
* Return: Integer
*/

int is_palindrome(char *s)
{
	return (helper(s, 0, strlen(s) - 1));
}
