#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints its contents to STDOUT
 *
 * @filename: the name of the text file being read
 * @letters: the number of letters to be read
 *
 * Return: the actual number of bytes read and printed (w)
 *         or 0 if the function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

