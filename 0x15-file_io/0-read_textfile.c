#include "main.h"
#include <stdlib.h>
/**
 * read_textfile-Read the text file print to STDOUT.
 * @filename:Text file to be read.
 * @letters:Number of the letters to be read.
 * Return:w- actual number of the  bytes read and printed.
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t v;
	ssize_t h;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	h = read(fd, buf, letters);
	v = write(STDOUT_FILENO, buf, h);

	free(buf);
	close(fd);
	return (v);
}
