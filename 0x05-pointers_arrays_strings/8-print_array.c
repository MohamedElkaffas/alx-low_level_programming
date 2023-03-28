#include "main.h"
#include <stdio.h>

/**
 * print_array - print array content
 * @a: array of integers 
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i, cnt;

	i = 0;
	cnt = 1;
	if (n < 0)
		break;
	if (n >= 0)
	{
		while (cnt < n)
		{
			printf("%d, ", a[i]);
			++i;
			++cnt;
		}
		printf("%d\n", a[i]);
	}
}
