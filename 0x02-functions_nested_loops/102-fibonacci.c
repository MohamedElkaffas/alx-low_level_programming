#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	long long int sum;
	long long int first, second;
	int count;

	sum = 0;
	first = 0;
	second = 1;
	count = 0;

	while (count < 49)
	{
		sum = first + second;
		printf("%lli, ", sum);
		first = second;
		second = sum;

		count++;
	}
	sum = first + second;
	printf("%lli\n", sum);

	return (0);
}
