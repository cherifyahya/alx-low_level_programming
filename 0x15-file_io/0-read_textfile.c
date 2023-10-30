#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text
 * @filename: text file
 * @letters: number of letters
 * Return: nbr bytes read nd printd
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t f, r, w;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(f, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(f);
	return (w);
}
