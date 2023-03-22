#include <stdio.h>

/**
 * main - first 98 fibonacci numbers
 *
 * Return: Always 0.
 */


int main(void)
{
	long a = 1, b = 2, cnt = 2;
	long c;

	printf("%ld, %ld", a, b);

	while (cnt < 100)
	{
		c = (long)a + b;
		printf(", %ld", c);
		a = b;
		b = c;
		++cnt;
	}

	printf("\n");
	return (0);
}
