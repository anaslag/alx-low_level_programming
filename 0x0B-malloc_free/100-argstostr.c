#include <stdlib.h>
#include "main.h"

/**
* *argstostr - concatenatesthe arguments
* @ac: number of arg
* @av: array of arg
* Return: Pointer to the new string (Success)
*/
char *argstostr(int ac, char **av)
{
	int i, j, n, sz;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			sz++;
		sz++;
	}

	str = malloc(sizeof(char) * (sz + 1));

	if (str == NULL)
		return (NULL);

	n = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[n] = av[i][j];
			n++;
		}
		str[n] = '\n';
		n++;
	}
	return (str);
}
