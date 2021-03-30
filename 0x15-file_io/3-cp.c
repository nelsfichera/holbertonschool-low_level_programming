#include "holberton.h"
/**
* main - copy file content into another file
* @argc: num of files in arg
* @argv: name of files in arg
* Return: int
*/
int main(int argc, char *argv[])
{
	int checker;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from tile_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	checker = copy_file(argv[1], argv[2]);
	if (checker == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (checker == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	return (0);
}
/**
* copy_file - content into a buffer
* @file_from: the file to copy
* @file_to: the destination file
* Return: 0 on success, 1 on failure to file_from, 2 if failed on file_to,
* 100 if failed to close a file.
*/
int copy_file(char *file_from, char *file_to)
{
	char buffer[1024];
	int fd, fd1, check;

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
		return (1);
	fd1 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd1 == -1)
		return (2);
	while ((check = read(fd, buffer, 1024)) != 0)
	{
		if (check == -1)
			return (1);
		if (write(fd1, buffer, check) == -1)
			return (2);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	return (0);
}
