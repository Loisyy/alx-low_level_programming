#include "main.h"
#include <stdlib.h>

/**
 * Description:read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t txt;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	txt = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, txt);

	free(buffer);
	close(fd);
	return (w);
}
