#include "main.h"

void print_alphabet(void);

/**
 * print_alphabet - print alphabet
 * Return: Nothing
 *
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		++letter;
	}
	_putchar('\n');
}

