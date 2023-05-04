#include "main.h"

/**
 * set_bit - sets a bitt
 * @n: pointer to the num to change
 * @index: index of the bit to put  to 1
 * Return: 1 for success, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
