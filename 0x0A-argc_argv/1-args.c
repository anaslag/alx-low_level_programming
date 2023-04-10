#include <stdio.h>

/**
 * main- prints the number of arguments passed
 * @argc: number of cmd line arguments
 * @argv: pointer to an array of cmd line arg
 * Return: 0-sucess
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
