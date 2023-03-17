#include <stdio.h>


/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet except e, q
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i = 0;

	while (i < 9)
	{
		int j = i + 1;

		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			++j;
		}
		++i;
	}

	putchar(10);

	return (0);
}
