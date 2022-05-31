#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - read number of character and return quantity
 * @filename: 2nd argument
 * @letters: number of characters
 *
 * Return: number of character or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int rd;
	ssize_t wrt;
	char *BUF;

	if(filename == NULL)
	{
		return (0);
	}
	if(letters <= 0)
		return (0);
	BUF = malloc(sizeof(char) * letters);
	if(BUF == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if(fd == -1)
		return (0);
	rd = read(fd, BUF, letters);
	if(rd == -1)
		return (0);
	wrt = write(1, BUF, rd);
	if(wrt < 0 || wrt != rd)
		return (0);
	free(BUF);
	close(fd);
	return (wrt);
}
