#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * buf_create - allocate 1024 to read 1,024
 * bytes at a time from the file_from
 * @fl: buffer file store char
 * Return: new buffer
 */

char *buf_create(char *fl)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", fl);
		exit(99);
	}
	return (buf);
}

/**
 * fl_clos - close file descriptor
 * @fd: file descriptor
 * Return: void
 */

void fl_clos(int fd)
{
	int clse = close(fd);

	if (clse == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argv: array for argunments
 * @argc: # argunment
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int r, w, to, from;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				 "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = buf_create(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w = write(to, buf, r);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write from file %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		r = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buf);
	fl_clos(from);
	fl_clos(to);
	return (0);
}
