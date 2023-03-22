#include <stdio.h>

/**
 * main - first 98 fibonacci numbers
 *
 * Return: Always 0.
 */


int main(void)
{
	unsigned long a = 1, b = 2, cnt = 2;
	unsigned long c;

	printf("%lu, %lu", a, b);

	while (cnt < 98)
	{
		c = (long)a + b;
		printf(", %lu", c);
		a = b;
		b = c;
		++cnt;
	}

	printf("\n");
	return (0);
}
