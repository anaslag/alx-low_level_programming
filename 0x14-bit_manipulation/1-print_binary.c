#include "main.h"

/**
 * print_binary - funct prints the binary equvlt of a decimal num
 * @n: number that is to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int i, countt = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			countt++;
		}
		else if (countt)
			_putchar('0');
	}
	if (!countt)
		_putchar('0');
}
