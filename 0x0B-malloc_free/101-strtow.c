#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * number - function to calculate words' count
 * @str: string being passed to check for words
 *
 * Return: number of words
 */
int number(char *str)
{
	int a, num = 0;

	for (a = 0; str[a] != '\0'; ++a)
	{
		if (*str == ' ')
			++str;
		else
		{
			for (; str[a] != ' ' && str[a] != '\0'; ++a)
				++str;
			++num;
		}
	}
	return (num);
}
/**
 * free_everything - frees the memory
 * @string: pointer values being passed for freeing
 * @i: counter
 */
void free_everything(char **string, int i)
{
	while (i > 0)
		free(string[--i]);
	free(string);
}

/**
 * strtow - function that splits string into number of words
 * @str: string being passed
 * Return: null if string is empty or null or function fail
 */
char **strtow(char *str)
{
	int total_words = 0, b = 0, c = 0, length = 0;
	char **words, *found_word;

	if (str == 0 || *str == 0)
		return (NULL);
	total_words = number(str);
	if (total_words == 0)
		return (NULL);
	words = malloc((total_words + 1) * sizeof(char *));
	if (words == 0)
		return (NULL);
	for (; *str != '\0' &&  b < total_words;)
	{
		if (*str == ' ')
			++str;
		else
		{
			found_word = str;
			for (; *str != ' ' && *str != '\0';)
			{
				++length;
				++str;
			}
			words[b] = malloc((length + 1) * sizeof(char));
			if (!words[b])
			{
				free_everything(words, b);
				return (NULL);
			}
			while (*found_word != ' ' && *found_word != '\0')
			{
				words[b][c] = *found_word;
				++found_word;
				++c;
			}

			words[b][c] = '\0', ++b, c = 0, length = 0, ++str;
		}
	}
	return (words);
}
