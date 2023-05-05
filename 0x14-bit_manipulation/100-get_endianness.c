#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 **/
int get_endian(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return ((*c) ? 1 : 0);
}
