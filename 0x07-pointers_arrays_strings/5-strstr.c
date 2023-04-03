#include "main.h"
#include <string.h>

/**
* _strstr - Finds needle in haystack
* @haystack: Haystack string parameter
* @needle: Needle string parameter
* Return: Pointer to first occurence
* of needle in haystack
*/

char *_strstr(char *haystack, char *needle)
{
	char *p;
	char *q;

	while (*haystack != '\0')
	{
		p = haystack;
		q = needle;

		while (*p == *q && *p != '\0' && *q != '\0')
		{
			p++;
			q++;
		}

		if (*q == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
