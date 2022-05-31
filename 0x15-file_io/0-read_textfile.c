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
	ssize_t rd;
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
	{
		free(BUF);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if(fd == -1)
		return (0);
	rd = read(fd, BUF, letters);
	if(rd == -1)
		return (0);
	wrt = write(1, BUF, rd);
	if(wrt == -1 || wrt < rd)
		return (0);
	wrt = close(fd);
	if(wrt < 0)
		return (0);
	free(fd);
	return (rd);
}
