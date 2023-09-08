#include "main.h"
/**
 * append_text_to_file -Append the text at the end of  file.
 * @filename:Pointer to a name of the file.
 * @text_content:A string to add at the end of the file.
 *
 * Return:If filename is NULL return -1
 * If text_content is NULL
 * Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int v, h, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	v = open(filename, O_WRONLY | O_APPEND);
	h = write(v, text_content, len);

	if (v == -1 || h == -1)
		return (-1);

	close(v);

	return (1);
}
