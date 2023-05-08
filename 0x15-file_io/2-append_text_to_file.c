#include "main.h"

/**
 * append_text_to_file - Funct that ap text int the end
 * @filename: ptr to name of file
 * @text_content: strng to add at te end
 * Return: If funct hits fail or filename is NUL - -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int m, x, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	m = open(filename, O_WRONLY | O_APPEND);
	x = write(m, text_content, lent);

	if (m == -1 || x == -1)
		return (-1);

	close(m);

	return (1);
}
