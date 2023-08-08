#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: The pointer to name of  file to create.
 * @text_content: The pointer to a string to write to a file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int ft, v, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	ft = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	v = write(ft, text_content, len);

	if (ft == -1 || v == -1)
		return (-1);

	close(ft);

	return (1);
}
