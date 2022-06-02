#include "main.h"

/**
 * main - copy file content to another file
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd1, fd2, c1, c2;
	ssize_t rd;
	char BUF[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd2 = open(av[2], O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	while ((rd = read(fd1, BUF, 1024)) > 0)
		if (write(fd2, BUF, rd) != rd || fd2 == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	if (rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	c1 = close(fd1);
	c2 = close(fd2);
	if (c1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (c2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
