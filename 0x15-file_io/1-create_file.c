#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#include "holberton.h"

/**
 * create_file - creates a file with text content specified
 * @filename: name of the file
 * @text_content:text content to be written inside the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	int fd = 0;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	while (*text_content)
	{
		if (write(fd, text_content, 1) == -1)
		{
			close(fd);
			return (-1);
		}
		text_content++;
	}

	close(fd);
	return (1);

}
