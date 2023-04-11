#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* helper - Breaks solution into modules
* @str: String parameter
* @words: Words parameter
* Return: Void
*/

void helper(char *str, char **words)
{
	const int MAX_WORD_LEN = 1000;
	int num_words = 0;
	int i = 0, j;

	while (str[i] != '\0')
	{
		while (isspace(str[i]))
			i++;

		if (str[i] == '\0')
			break;

		j = 0;

		while (!isspace(str[i]) && str[i] != '\0')
		{
			if (j < MAX_WORD_LEN)
			{
				words[num_words][j] = str[i];
				j++;
			}

			i++;
		}

		words[num_words][j] = '\0';
		num_words++;
	}

	words[num_words] = NULL;
}

/**
 * strtow - Prints words in string on newlines
 * @str: String parameter
 * Return: Array of strings
 */

char **strtow(char *str)
{
	const int MAX_WORDS = 1000;
	const int MAX_WORD_LEN = 1000;
	int i, j;
	char **words;

	if (str == NULL || strlen(str) == 0)
		return (NULL);

	words = malloc(MAX_WORDS * sizeof(char *));

	if (words == NULL)
		return (NULL);

	for (i = 0; i < MAX_WORDS; i++)
	{
		words[i] = malloc(MAX_WORD_LEN);

		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);

			free(words);
			return (NULL);
		}
	}

	helper(str, words);

	return (words);
}
