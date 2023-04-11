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
	int num_words = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			num_words++;

		i++;
	}

	return (num_words);
}

char *extract_word(char *str, int start, int end)
{
	char *word;

	word = malloc(sizeof(char) * (end - start + 1));

	if (!word)
		return (NULL);

	strncpy(word, str + start, end - start);
	word[end - start] = '\0';

	return (word);
}

/**
 * split_words - Splits does actuall splitting
 * @str: String parameter to split
 * @num_words: Number of words
 * Return: Array of strings
 */

char **split_words(char *str, int num_words)
{
	char **words;
	int i = 0, k = 0, start = 0;

	words = malloc(sizeof(char *) * (num_words + 1));

	if (!words)
		return (NULL);

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			start = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;

			words[k] = extract_word(str, start, i);

			if (!words[k])
			{
				for (int j = 0; j < k; j++)
					free(words[j]);

				free(words);
				return (NULL);
			}

			k++;
		}

		i++;
	}

	words[k] = NULL;

	return (words);
}

/**
 * strtow - Splits string into words
 * @str: String parameter to split
 * Return: Array of strings
 */

char **strtow(char *str)
{
	int num_words;

	if (!str || !*str)
		return (NULL);

	num_words = count_words(str);

	if (!num_words)
		return (NULL);

	return (split_words(str, num_words));
}
