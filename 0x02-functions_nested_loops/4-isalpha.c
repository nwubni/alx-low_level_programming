#include "main.h"

/**
 * _isalpha - Checks if c is an alphabet
 * @c: the parameter
 * Return: true of false
 */
int _isalpha(int c)
{
	return (c >= 65 && c <= 90 || c >= 97 && c <= 122);
}
