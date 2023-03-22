#include <stdio.h>

/**
 * main - first 98 fibonacci numbers
 *
 * Return: Always 0.
 */


int main(void)
{
	int a = 1, b = 2, cnt = 2;
	long c;

	printf("%d, %d", a, b);

	while (cnt < 98)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
		++cnt;
	}

	printf("\n");
	return (0);
}
