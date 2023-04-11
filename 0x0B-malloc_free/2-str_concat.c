#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string
 * Return: pointer to the new string created (Success), or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i = 0, j = 0, sz1 = 0, sz2 = 0;

	while (s1 && s1[sz1])
		sz1++;
	while (s2 && s2[sz2])
		sz2++;

	s3 = malloc(sizeof(char) * (sz1 + sz2 + 1));
	if (s3 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < sz1)
		{
			s3[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (sz1 + sz2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';

	return (s3);
}

