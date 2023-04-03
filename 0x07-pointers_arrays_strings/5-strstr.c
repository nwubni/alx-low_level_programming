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
	if (*needle == '\0')
		return haystack;

	unsigned int i, j, k, h_len, n_len;

	h_len = strlen(haystack);
	n_len = strlen(needle);

	for (i = 0; i < h_len; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0, k = i; k < h_len && j < n_len; j++, k++)
			{
				if (haystack[k] != needle[j])
					break;
			}

			if (j == n_len)
				return (haystack + i);
		}
	}

	return (NULL);
}
