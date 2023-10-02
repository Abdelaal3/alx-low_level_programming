#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Retrieve the content from the text file and output it to STDOUT.
 * @filename: The file's content is being examined.
 * @letters: This is the number of letters to be read
 * Return: The actual number of bytes read and displayed (w).
 *       Returns 0 in cases of function failure or if the filename is NULL.
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
