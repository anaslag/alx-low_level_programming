#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 * alphabet.c -  Description: 'print alphabet in lowercase 10 times'
 * Return: always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
