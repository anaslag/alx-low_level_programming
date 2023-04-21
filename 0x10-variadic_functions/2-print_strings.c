#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - This function prints strings, followed by a new line.
 * @separator: The string to be printed between other strings printed
 * @x: The number of strings in the function
 * @...: A variable number of strings that needs to be printed.
 *
 * Description: If separator is NULL, it will not  not be printed.
 *      If one of the strings if NULL, (nil) is printed.
 */
void print_strings(const char *separator, const unsigned int x, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, x);

	for (index = 0; index < x; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (x - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
