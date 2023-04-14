#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print product of two numbers
 * @argc: number of argument
 * @argv: array of argument command line
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
