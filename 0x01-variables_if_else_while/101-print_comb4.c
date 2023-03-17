#include <stdio.h>
/**
 * main - task
 * prints combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				int num = i * 100 + j * 10 + k;

				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (num != 789)
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
