#include <stdio.h>

/**
 * main - print triple combinstion
 *
 * Description: print triple digit comb
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	i = 0;
	j = 1;
	k = 2;

	while (i < 8)
	{
		j = i + 1;

		while (j < 9)
		{
			k = j + 1;

			while (k < 10)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}

				++k;
			}

			++j;
		}

		++i;
	}

	putchar(10);

	return (0);
}

