#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints the result of sum.
 * @argc: the number of arguments.
 * @argv: an array of pointers to an argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (argc--)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
			sum += atoi(argv[argc]);
	}
	printf("%d/n", sum);
	return (0);
}
