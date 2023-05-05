#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: Source number
 * @m: Target number
 *
 * Return: Numbers of bits that n need change to equal m
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cnt;

	for (cnt = i = 0; i < 64; ++i, ++cnt)
		if (((n >> i) & 1) == ((m >> i) & 1))
			--cnt;

	return (cnt);
}
