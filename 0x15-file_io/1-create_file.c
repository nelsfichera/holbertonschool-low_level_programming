#include "holberton.h"
/**
* create_file - creates a file
* @filename: what it says
* @text_content: text in file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		return (1);
	}
	for (len = 0; text_content[1en]; len++)
		;
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	write(fd, text_content, len);
	close(fd);
	return (1);
}
