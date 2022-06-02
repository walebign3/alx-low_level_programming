#include "main.h"

/**
 * main - check the code
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
	fd2 = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	fd1 = open(av[1], O_RDONLY);
	while ((rd = read(fd1, BUF, 1024)) > 0)
		if (write(fd2, BUF, rd) != rd)
		{
			dprintf(2, "Error: Can't write to NAME_OF_THE_FILE\n");
			exit(99);
		}
	if (rd == -1)
	{
		dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	c1 = close(fd1);
	c2 = close(fd2);
	if (c1 == -1 || c2 == -1)
	{
		dprintf(2, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	return (0);
}
