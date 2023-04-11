#include "main.h"

/**
 * *create_array - creates an array of chars
 * and initializes it with determined chars
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to an array initialized or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
