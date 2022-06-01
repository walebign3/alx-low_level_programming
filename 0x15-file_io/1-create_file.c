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
	int fd;
	ssize_t i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	while (*(text_content + i))
		i++;
	fd = open(filename, O_RDONLY);
	if (fd == -1 && text_content != NULL)
	{
		fd = open(filename, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR);
		write(fd, text_content, i);
		if (fd == -1)
			return -1;
	}
	else if (fd == -1 && text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR);
		if (fd == -1)
                        return -1;
	}
	else
	{
		fd = open(filename, O_TRUNC);
		if (fd == -1)
                        return -1;
		write(fd, text_content, i);
	}
	close(fd);
	return (1);
}
