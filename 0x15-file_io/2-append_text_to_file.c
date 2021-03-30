#include "holberton.h"
/**
* append_text_to_file - add text to the end of a file
* @filename: file
* @text_content: content
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (len = 0; text_content[len]; len++)
		;
	write(fd, text_content, len);
	close(fd);
	return (1);
}
