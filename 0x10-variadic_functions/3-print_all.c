#include <stdio.h>
#include <stdarg.h>

/**
* check_format - Checks format type
* @c: Character
* Return: Integer
*/

int check_format(char c)
{
	return (c == 'c' || c == 'i' || c == 'f' || c == 's');
}

/**
* print_all - Function prints anything
* @format: String formatter
* Return: void
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s", (s ? s : "(nil)"));
				break;
			default:
				break;
		}

		if (format[i + 1] != '\0' && check_format(format[i]))
			printf(", ");

		i++;
	}

	va_end(args);

	printf("\n");
}

