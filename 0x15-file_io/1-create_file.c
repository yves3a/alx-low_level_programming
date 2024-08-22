#include "main.h"

/**
 * create_file - it creates a file
 * @filename: file name to be created
 * @text_content: a pointer to a string to be wrote in a file.
 * Return: 1 on success and -1 on failure
 *	returns -1 when file is NULL.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int wrt;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(fd, text_content, len);

	if (wrt == -1 || fd == -1)
		return (-1);
	close(fd);

	return (1);
}
