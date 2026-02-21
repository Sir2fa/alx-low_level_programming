#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *make_buffer(char *file);
void close_file(int fdes);

/**
 * make_buffer - Allocates 1024 bytes for a buffer.
 * @file: File name of the file buffer stores char.
 *
 * Return: Pointer to allocated buffer.
 */

char *make_buffer(char *file)
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
 * close_file - Close file descriptors.
 * @fdes: File descriptor to close.
 */

void close_file(int fdes)
{
	int s;

	s = close(fdes);

	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fdes %d\n", fdes);
		exit(100);
	}
}

/**
 * main - Copies content of file to another file.
 * @argc: The number of argument count.
 * @argv: Array of pointer to argument.
 *
 * Return: Always 0 on success.
 *
 * Description: Argument not correct - exit 97.
 *		fdes_from not existing - exit 98.
 *		fdes_to can not be written or created - exit 99.
 *		fdes_to, fdes_from cannot close - exit 100.
 */

int main(int argc, char *argv[])
{
	int fdes_from, fdes_read, fdes_to, fdes_write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = make_buffer(argv[2]);
	fdes_from = open(argv[1], O_RDONLY);
	fdes_read = read(fdes_from, buffer, 1024);
	fdes_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fdes_from == -1 || fdes_read == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		
		fdes_write = write(fdes_to, buffer, fdes_read);
		if (fdes_to == -1 || fdes_write == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}


		fdes_read = read(fdes_from, buffer, 1024);
		fdes_to = open(argv[2], O_WRONLY | O_APPEND);

		}while (fdes_read > 0);

		free(buffer);
		close_file(fdes_from);
		close_file(fdes_to);

		return (0);
}
