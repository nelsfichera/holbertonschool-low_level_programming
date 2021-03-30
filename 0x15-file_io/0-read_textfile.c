#include "holberton.h"
/**
* read_textfile - read and print to stdout
* @filename: name of file
* @letters: letters to print
* Return: number of letters read & printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t n_read, n_wrote;
	int fd;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	n_read = read(fd, buffer, letters);
	if (n_read < 1)
	{
		free(buffer);
		return (0);
	}
	n_wrote = write(STDOUT_FILENO, buffer, n_read);
	if (n_wrote < 1 || n_wrote != n_read)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (n_wrote);
}
