#include "main.h"

/**
 * create_file - Funct that create a file.
 * @filename: A pointer to name of file to be created
 * @text_content: pointer to a strng
 * Return: when funct hit fail  - -1
 */
int create_file(const char *filename, char *text_content)
{
	int d, w, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(d, text_content, lent);

	if (d == -1 || w == -1)
		return (-1);

	close(d);

	return (1);
}
