#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - fuction that reads a text file and prints
 * @filename: the filename
 * @letters: the number of letters
 * Return: 0 if filename is Null or cant be opened
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);
	r = read(file, buffer, letters);
	if (r == -1)
		return (0);

	buffer[letters] = '\0';

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
		return (0);

	close(file);
	free(buffer);
	return (w);
}
