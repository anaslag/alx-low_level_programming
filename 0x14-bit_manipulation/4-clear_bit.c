#include "main.h"

/**
 * clear_bit - funct sets the value of bit to 0
 * @n: pointer to num that needs changing
 * @index: index of bit
 * Return: returns 1 for success, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
