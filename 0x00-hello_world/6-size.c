#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints type sizes using the sizeof operator
 * of art,"
 * Return: Always 0 (Success)
 */
 int main(void)
 {
 	char c;
 	int i;
 	long int l;
 	long long ll;
 	float f;
 	
 	printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(c));
 	printf("Size of a int: %lu byte(s)", (unsigned long)sizeof(i));
 	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(l));
 	printf("Size of a long long: %lu byte(s)", (unsigned long)sizeof(ll));
 	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(f));
 	
 	return (0);
 }
