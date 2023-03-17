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
        putchar(c);
        ++c;
    }
    
    char C = 'A';

    while (C <= 'Z')
    {
        putchar(C);
        ++C;
    }
    
    putchar(10);

    return (0);
}
