#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Gets the number of words in a string
 * @str: string to evaluate
 * Return: Number of words
 */
int count_words(char *str)
{
	int i, words = 0, in_word = 0;

	for (i = 0; str[i]; i++)
	{
		if (!in_word && str[i] != ' ')
		{
			in_word = 1;
			words++;
		}
		else if (in_word && str[i] == ' ')
		{
			in_word = 0;
		}
	}

	return words;
}

/**
 * strtow - Splits string into words
 * @str: String parameter to split
 * Return: Array of strings
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, num_words, start, end;

	if (!str || !*str)
		return (NULL);

	num_words = count_words(str);

	if (!num_words)
		return (NULL);

	words = malloc(sizeof(char *) * (num_words + 1));

	if (!words)
		return (NULL);

	for (i = 0, k = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			start = i;
			for (j = start; str[j] && str[j] != ' ';)
				j++;

			end = j;
			len = end - start;
			words[k] = malloc(sizeof(char) * (len + 1));

			if (!words[k])
			{
				for (i = 0; i < k; i++)
					free(words[i]);
					
				free(words);
				return (NULL);
			}
			
			strncpy(words[k], str + start, len);

			words[k][len] = '\0';
			k++;
			i = end - 1;
		}
	}

	words[k] = NULL;

	return (words);
}

