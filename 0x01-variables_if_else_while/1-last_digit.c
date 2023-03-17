#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints the last digit of n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	printf("Last digit of %d is %d ", n, r);
	if(r == 0)
		printf("and is 0");
	else if(r > 5)
		printf("and is greater than 5");
	else if(r < 6)
		printf("and is less than 6 and not 0");
	printf("\n");
	return (0);
}
