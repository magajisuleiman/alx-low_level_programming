#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read a text filr and print to stdout
 * @filename: file name to be read
 * @letters: letters required to be read
 *
 * Return: w- actual number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufer;
	ssize_t file_d;
	ssize_t write_f;
	ssize_t read_t;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	bufer = malloc(sizeof(char) * letters);
	read_t = read(file_d, bufer, letters);
	write_f = write(STDOUT_FILENO, bufer, read_t);

	free(bufer);
	close(file_d);
	return (write_f);
}

