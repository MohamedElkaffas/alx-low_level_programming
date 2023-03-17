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
    char c = 'a', C = 'A';

    while (c <= 'z')
    {
        putchar(c);
        ++c;
    }

    while (C <= 'Z')
    {
        putchar(C);
        ++C;
    }
    
    putchar(10);

    return (0);
}
