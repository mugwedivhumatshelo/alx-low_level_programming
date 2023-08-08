#include "main.h"
/**
 * append_text_to_file -Appends text at the end of a file.
 * @filename: The pointer to a name of a file.
 * @text_content: A string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fut, u, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fut = open(filename, O_WRONLY | O_APPEND);
	u = write(fut, text_content, len);

	if (fut == -1 || u == -1)
		return (-1);

	close(fut);

	return (1);
}
