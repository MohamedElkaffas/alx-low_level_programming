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
	for (int i = 0; i < 9; ++i)
	{
		for (int j = i + 1; j < 10; ++j)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar(10);

	return (0);
}
