#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end
 * @filename: the filename
 * @text_content: NULL terminated string to add
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, appen, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, o_WRONLY | O_EXCL | O_APPEND);
	if (file < 0)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;

		appen = write(file, text_content, i);
		if (appen < 0)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
