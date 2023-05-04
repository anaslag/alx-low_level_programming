#include "main.h"

/**
 * flip_bits - counts the num of bits
 * @n: 1st num
 * @m: snd num
 * Return: returns num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, countt = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			countt++;
	}

	return (countt);
}
