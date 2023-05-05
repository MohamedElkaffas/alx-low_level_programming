#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointing to a string of 0 and 1 chars
 *
 * Return: Decimal result
 **/

unsigned int binary_to_uint(const char *b)
{
	int i, multiplier;
	unsigned int num;

	if (!b)
		return (0);

	for (i = num = 0; b[i] != 0; ++i)
		if (b[i] != '0' && b[i] != '1')
			return (num);

	for (i -= 1, multiplier = 0; i >= 0; --i, ++multiplier)
	{
		if (b[i] != '0')
			num += 1 << multiplier;
	}

	return (num);
}
