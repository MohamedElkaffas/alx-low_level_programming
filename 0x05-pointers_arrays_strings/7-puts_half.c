#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, max, ans;

	i = 0;
	j = 0;

	if (_strlen(str) % 2 == 1)
	{
		j = _strlen(str) / 2 + 1;
	}
	else
	{
		j = _strlen(str) / 2;
	}

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		++j;
	}
	_putchar('\n');
}
