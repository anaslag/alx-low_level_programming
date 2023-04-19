#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print a name using a pointer to function
 * @name: string that needds to be added
 * @f: pointer to the function
 * Return: doesn't return
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
