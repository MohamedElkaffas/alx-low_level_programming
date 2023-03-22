#include <stdio.h>

/**
 * main - first 98 fibonacci numbers
 *
 * Return: Always 0.
 */


int main(void)
{
	int a = 0, b = 1, cnt = 0;
	long c;

	printf("%d, %d", a, b);

	while (cnt < 96)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
		++cnt;
	}

	printf("\n");
	return (0);
}
