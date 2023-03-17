#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        char c = 'a';

        while (c <= 'z')
        {
		if (c == 'e' || c == 'q') continue;
                putchar(c);
                ++c;
        }

        putchar(10);

        return (0);
}

