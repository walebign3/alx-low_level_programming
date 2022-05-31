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
	int i = 0;
	ssize_t wrt;
	char *BUF = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return 0;
		exit(1);
	}
	fd = open (filename, O_RDONLY);
	if (fd == -1)
		return 0;
	read (fd, BUF, letters);
	while (BUF[i])
		i++;
	wrt = write (1,BUF,i);
	if (wrt < 0)
		return 0;
	return (wrt);
	return i;
	close(fd);
}
