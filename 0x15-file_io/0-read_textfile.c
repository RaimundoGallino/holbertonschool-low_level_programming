#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#include "holberton.h"

/**
 * read_textfile - eads a text file and prints
 * @filename: name of the file
 * @letters:the number of letters it should read and print
 * Return:number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t imp;
	ssize_t ret;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (-1);

	imp = read(fd, buf, letters);
	if (fd != -1)
	{
		ret = write(1, buf, letters);

		if (ret == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (imp);

}
