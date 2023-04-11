#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a 3rd
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string, NULL -> fail
 */

char *str_concat(char *s1, char *s2)
{
	int i, l1, l2, l3;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = 0;
	while (*(s1 + l1) != '\0')
	{
		++l1;
	}

	l2 = 0;
	while (*(s2 + l2) != '\0')
	{
		++l2;
	}

	l3 = l1 + l2;

	arr = (char *) malloc(l3 * sizeof(char) + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < l1; ++i)
		arr[i] = s1[i];
	for (i = 0; i < l2; ++i)
		arr[i + l1] = s2[i];

	return (arr);
}
