#include "main.h"

/**
 * append_text_to_file - read number of character and return quantity
 * @filename: file name
 * @text_content: content of the file
 *
 * Return: number of character or 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t i = 0;
	ssize_t wrt;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		fd = open(filename, O_RDWR | O_APPEND);
		if (fd == -1)
		{
			return (-1);
		}
		wrt = write(fd, text_content, i);
		if (wrt == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
