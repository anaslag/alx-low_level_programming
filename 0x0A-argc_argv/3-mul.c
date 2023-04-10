#include <stdio.h>
#include <stdlib.h>

/**
 * main-print multiplication of two numbers
 * @argc: number of command line arguments
 * @argv: pointer to an array of command line arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
