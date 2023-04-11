#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated mem space
 * @str: string
 * Return: pointer to newly allocated space in memory
 */

char *_strdup(char *str)
{
	int sz, i;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	sz = 0;
	while (*(str + sz) != '\0')
	{
		++sz;
	}

	arr = malloc(sz * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < sz; ++i)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';

	return (arr);
}
