#include "function_pointers.h"

/**
* print_name - Function prints name using pointer function
* @name: Name to print
* @f: Function pointer
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
