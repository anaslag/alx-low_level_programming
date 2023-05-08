#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - funct that allocates bytes
 * @file: The name of the file
 * Return: pointer to the new buff
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - funct that Closes file descr
 * @fd: The file desc to close
 */
void close_file(int fd)
{
	int cf;

	cf = close(fd);

	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - funct hat copies the content of a file to another
 * @argc: The number of args supplied
 * @argv: array of ptrs.
 * Return: returns 0 if success.
 * Description: these are the cases If arg count is inc - exit code 97.
 * If file_from does not exist or cant be read - exit code 98.
 * If file_to cant written - exit code 99.
 * If file_to or file_from cant be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, t, z;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	t = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || t == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		z = write(to, buffer, t);
		if (to == -1 || z == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		t = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (t > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
