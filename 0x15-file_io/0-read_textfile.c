#include "main.h"

/**
 * read_textfile - it reads a text file and prints it to the std ouput.
 * @filename: a pointer to the file to be read
 * @letters: number of letter it should read and print.
 *
 * Return: number of leters it could read and print
 *	-return 0 if file is NULL and can't be opened
 *	- return 0 when write fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, l_writen, l_read;
	char *buff;

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buff);
	}

	l_read = read(fd, buff, letters);

	if (l_read == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	l_writen = write(1, buff, letters);

	if (l_writen == -1 || l_writen == l_read)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (l_read);

}
