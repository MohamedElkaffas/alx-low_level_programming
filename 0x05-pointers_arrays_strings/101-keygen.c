#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/**
 * check - executes checksum
 * @s: input character
 * Return: checksum
 */
unsigned long check(char *s)
{
	unsigned long sum = 0;
	while (*s != 0)
	{
		sum += *s;
		++s;
	}
	return (sum);
}
/**
 * main - prints password for crakme
 *
 * Return: Always 0.
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQSTUVWXYZ";
	char s[33];
	unsigned long sum;
	int i, flag = 0;

	srand(time(NULL));
	while (flag == 0)
	{
		for (i = 0; i < 33; i++)
		{
			s[i] = alpha[rand() % (sizeof(alpha) - 1)];
		}
		s[i] = '\0';
		sum = check(s);
		if (sum == 2772)
		{
			flag = 1;
			printf("%s", s);
		}
	}
return (0);
}
