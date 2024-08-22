#include "main.h"
#include <stdio.h>

/**
 * create_buff - it create a buffer to store data of fd_from
 * @file: name of the file to store data for
 *
 * Return: a pointer to a newly allocated buffer
 */

char *create_buff(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - it closes a file descriptor
 * @fd: the file descriptor to get closed
 *
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - it copies content from one file to another
 * @argc: number of arguments
 * @argv: an of pointers to the arguments passed.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	int r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	buff = create_buff(argv[2]);
	r = read(fd_from, buff, 1024);

	if (r == -1 || fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w = write(fd_to, buff, 1024);

	if (w == -1 || fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	free(buff);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
