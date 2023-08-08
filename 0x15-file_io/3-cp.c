#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer -Allocates 1024 bytes for a buffer.
 * @file: A name of the file buffer is storing chars.
 * Return: The pointer to a newly_allocated buffer.
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
 * close_file -Closes file descriptors.
 * @fd: A file descriptor to be closed.
 */
void close_file(int ft)
{
	int v;

	v = close(ft);

	if (v == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close ft %d\n", ft);
		exit(100);
	}
}

/**
 * main -Copies the contents of file to another file.
 * @argc: A number of arguments supplied to program.
 * @argv: array of pointers to an arguments.
 * Return: 0 on success.
 * Description: If an argument count is incorrect = exit code 97.
 * If file-from does not exist or cannot be read = exit code 98.
 * If file-to cannot be created or written to = exit code 99.
 * If file-to or file-from cannot be closed =exit code 100.
 */
int main(int argc, char *argv[])
{
	int m, v, f, t;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	m = open(argv[1], O_RDONLY);
	f = read(m, buffer, 1024);
	v = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (m == -1 || f == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		t = write(v, buffer, f);
		if (v == -1 || t == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		f = read(m, buffer, 1024);
		v = open(argv[2], O_WRONLY | O_APPEND);

	} while (f > 0);

	free(buffer);
	close_file(m);
	close_file(v);

	return (0);
}
