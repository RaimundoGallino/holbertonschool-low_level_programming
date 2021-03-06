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
	ssize_t fd;
	ssize_t ret, imp;
	char *buf;

	buf = malloc(letters);

	if (!buf)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	imp = read(fd, buf, letters);

	ret = write(STDOUT_FILENO, buf, imp);

	if (ret < 0)
		return (0);

	close(fd);
	return (ret);

}
