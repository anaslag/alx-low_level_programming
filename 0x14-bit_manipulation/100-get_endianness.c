#include "main.h"

/**
 * get_endianness - funct checks if a machine is small of big
 * Return: 0 if bigg, 1 forsmall
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
