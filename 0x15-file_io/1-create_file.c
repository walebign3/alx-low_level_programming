#include "main.h"

/**
 * create_file - read number of character and return quantity
 * @filename: file name
 * @text_content: content of the file
 *
 * Return: number of character or 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fd1, fd2, fd3;
	ssize_t i = 0;
	ssize_t wrt;

	if (filename == NULL)
	{
		return (-1);
	}
	while (*(text_content + i))
		i++;
	fd = open(filename, O_RDONLY);
	if (fd == -1 && text_content != NULL)
	{
		fd1 = open(filename, O_CREAT | O_RDWR, 0600);
		if (fd1 == -1)
			return -1;
		wrt = write(fd1, text_content, i);
		if (wrt == -1)
                        return -1;
		close(fd1);
	}
	else if (fd == -1 && text_content == NULL)
	{
		fd2 = open(filename, O_CREAT | O_RDWR, 0600);
		if (fd2 == -1)
                        return -1;
		close(fd2);
	}
	else
	{
		fd3 = open(filename, O_RDWR | O_TRUNC);
		if (fd3 == -1)
                        return -1;
		wrt = write(fd3, text_content, i);
		if (wrt == -1)
                        return -1;
		close(fd3);
	}
	close(fd);
	return (1);
}
