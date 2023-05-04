#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: char to be printed
 * Return: success 1 , error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
