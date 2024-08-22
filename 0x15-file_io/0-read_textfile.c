#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: the name of the file
 * @letters: the num of letters it should read and print
 * Return: w- actual num of bytes read and printed
 *               0- filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}
