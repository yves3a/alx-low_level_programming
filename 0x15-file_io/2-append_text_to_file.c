#include "main.h"

/**
 * append_text_to_file - it appends a text at the end of a file
 * @filename: a filename where to append
 * @text_content: a string to be appended into a file.
 * Return: 1 on success and -1 on failure.
 *	returns -1 when file is NULL.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	int wrt;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);

	for (len = 0; text_content[len];)
		len++;

	wrt = write(fd, text_content, len);

	if (wrt == -1)
		return (-1);
	close(fd);

	return (1);

}
