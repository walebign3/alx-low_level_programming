#include "main.h"

/**
 * main - copy file content to another file
 * @ac: The number of arguments
 * @av: pointers to argument.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd1, fd2, c1, c2;
	ssize_t rd, wrt;
	char *BUF;

	BUF = malloc(sizeof(char) * 1024);
	if (BUF == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	rd = read(fd1, BUF, 1024);
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do
	 {
		if (fd1 == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(BUF);
			exit(98);
		}
		wrt = write(fd2, BUF, rd);
		if (wrt == -1 || fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(BUF);
			exit(99);
		}
		rd = read(fd1, BUF,1024);
		wrt = open(av[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(BUF);
	c1 = close(fd1);
	c2 = close(fd2);
	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
