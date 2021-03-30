#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "holberton.h"

/**
 * append_text_to_file - append content to an existing file
 * @filename1: name of the file
 * @filename2:text content to be written inside the file
 * Return:number of letters it could read and print
 */

/*
 * int copy_file_content(const char *filename1, const char *filename2)
 * {
 * }
 */

int main(int ac, char **av)
{

	const char *file1, *file2;
	int fd1, fd2, i = 0;
	ssize_t w;

	if (ac != 3)
		dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n");
		exit(97);

	file1 = av[1];
	file2 = av[2];

	fd1 = open(file1, O_RDONLY | O_TRUNC);
	fd2 = open(file2, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", av[2]);
		exit(98);
	}
	while (*file1 != '\0')
	{
		i++;
	}

	w = write(fd2, file1, i);
	if (w == -1)
		return (-1);

	close(fd1);
	close(fd2);
}
