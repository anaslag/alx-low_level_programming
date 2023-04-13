#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string
 * @s1: string to append to
 * @s2: string to concatenate
 * @n: number of bytes to concatenate from s2 to s1
 * Return: pointer to th string in result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, lngt1 = 0, lngt2 = 0;

	while (s1 && s1[lngt1])
		lngt1++;
	while (s2 && s2[lngt2])
		lngt2++;

	if (n < lngt2)
		s = malloc(sizeof(char) * (lngt1 + n + 1));
	else
		s = malloc(sizeof(char) * (lngt1 + lngt2 + 1));

	if (!s)
		return (NULL);

	while (i < lngt1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < lngt2 && i < (lngt1 + n))
		s[i++] = s2[j++];

	while (n >= lngt2 && i < (lngt1 + lngt2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}

