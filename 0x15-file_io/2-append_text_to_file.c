#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#include "holberton.h"

/**
 * append_text_to_file - append content to an existing file
 * @filename: name of the file
 * @text_content:text content to be written inside the file
 * Return:number of letters it could read and print
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int fd = 0;
	ssize_t i = 0;
	ssize_t w = 0;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	for (; text_content[i] != '\0';)
	{
		i++;
	}

	w = write(fd, text_content, i);

	if (w == -1)
		return (-1);

	close(fd);
	return (1);

}
