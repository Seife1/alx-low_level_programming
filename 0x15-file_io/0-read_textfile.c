#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: the text file
 * @letters: # letters
 * Return: the actual number of letters || 0 => NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tf;
	ssize_t fd, w, r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	tf = malloc(sizeof(char) * letters);
	r = read(fd, tf, letters);
	w = write(STDOUT_FILENO, tf, r);

	free(tf);
	close(fd);
	return (w);
}
