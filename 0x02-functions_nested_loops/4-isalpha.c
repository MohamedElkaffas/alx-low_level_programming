#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: c is  ASCII character
 *
 * Return: 1 (if letter)
 */

int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
