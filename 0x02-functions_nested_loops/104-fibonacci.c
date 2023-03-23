#include <stdio.h>
/**
 * main - first 98 fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long double a0 = 0, a1 = 1, b0 = 0, b1 = 2, c0, c1, j;
	int i;

	printf("%.0Lf, %.0Lf, ", a1, b1);
	for (i = 1; i <= 94; ++i)
	{
		c0 = a0 + b0;
		c1 = a1 + b1;
		while (c1 >= 100000)
		{
			c1 -= 100000, ++c0;
		}
		if (c0 == 0)
		{
			printf("%.0Lf", c1);
		}
		else
		{
			printf("%.0Lf", c0);
			for (j = 10; j <= 10000; j *= 10)
			{
				if (j > c1)
				{
					putchar('0');
				}
			}
			printf("%.0Lf", c1);
		}
		if (i != 94)
		{
			printf(", ");
		}
		a0 = b0, a1 = b1, b0 = c0, b1 = c1;
	}
	printf("\n");
	return (0);
}
