#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function that prints the binary representation of a number
 * @n: Number to print in binary
 **/
void print_binary(unsigned long int n)
{
	unsigned long int h;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	h = n;
	for (i = 0; n != 0; n = n >> 1, ++i)
		;
	for (i -= 1; i >= 0; i--)
		_putchar('0' + ((h >> i) & 1));

}
