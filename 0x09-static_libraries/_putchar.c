#include "main.h"
#include <unistd.h>

/**
* _putchar - Prints a character
* @c: Input character
* Return: Integer
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
