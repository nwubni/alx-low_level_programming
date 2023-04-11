#include "main.h"
#include <stdlib.h>

/**
*/
char **strtow(char *str)
{
	const int MAX_WORDS = 1000;
	const int MAX_WORD_LEN = 1000;
	int i, j, num_words;

	if (str == NULL || strlen(str) == 0)
		return (NULL);

	char **words = malloc((MAX_WORDS) * sizeof(char *));

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

	num_words = 0;
	i = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;

		if (str[i] == '\0')
			break;

		j = 0;

		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
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

	return (words);
}
