#include "main.h"

/**
* reverse_array - Reverses array elements
* @a: Pointer to array start
* @n: Number of elements in array
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < (n / 2); i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
