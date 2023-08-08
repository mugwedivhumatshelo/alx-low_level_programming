#include "main.h"
#include <stdlib.h>
/**
 * read_textfile-reads a text file and prints it to the POSIX standard output.
 * @filename:The text file being read.
 * @letters: The number of letters to be read.
 * Return:the actual number of letters it could read and print,
 * 0 if filename is NULL,
 * or write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fut;
	ssize_t ur;
	ssize_t e;
	ssize_t v;
	
	ur = open(filename, O_RDONLY);
	if (ur == -1)
		return (0);
	fut = malloc(sizeof(char) * letters);
	v = read(ur, fut, letters);
	e = write(STDOUT_FILENO, fut, v);

	free(fut);
	close(ur);
	return (e);
}
