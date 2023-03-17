#include <stdio.h>
/**
 * main - task
 * prints combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			int num1 = i / 10, num2 = i % 10;
			int num3 = j / 10, num4 = j % 10;

			if (i != j)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(' ');
				putchar(num3 + '0');
				putchar(num4 + '0');

				if (i != 99 || j != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
