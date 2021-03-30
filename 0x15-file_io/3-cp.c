#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - program that copies the content of a file to another file
 * @av:name of the file
 * @ac:text content to be written inside the file
 * Return:number of letters it could read and print
 */

int main(int ac, char **av)
{
	const char *filef, *filet;
	int fd1, fd2, r = 0;
	ssize_t w;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filef = av[1];
	filet = av[2];
	fd1 = open(filef, O_RDONLY);
	fd2 = open(filet, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	r = read(fd1, buff, 1024);
	w = write(fd2, buff, r);
	if (w == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	close(fd1);
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	close(fd2);
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}
	return (0);
}
