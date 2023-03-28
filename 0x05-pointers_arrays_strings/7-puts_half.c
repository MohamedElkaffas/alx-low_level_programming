#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int j;
	j = 0;

	if (strlen(str) % 2 == 1)
	{
		j = strlen(str) / 2 + 1;
	}
	else
	{
		j = strlen(str) / 2;
	}

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		++j;
	}
	_putchar('\n');
}
