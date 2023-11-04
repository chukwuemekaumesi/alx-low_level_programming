#include "main.h"
#include <stdio.h>

/**
 * error_handler - to check if a file is opened
 * and handle the errors
 * @file_from: the file where the contyent is coming from
 * @file_to: the destination file
 * @argv: the argument vector
 */

void error_handler(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

}

/**
 * main - to copy content of a file
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0 if successful
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t n, rwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_handler(file_from, file_to, argv);

	n = 1024;
	while (n == 1024)
	{
		n = read(file_from, buffer, 1024);
		if (n == -1)
			error_handler(-1, 0, argv);
		rwr = write(file_to, buffer, n);
		if (rwr == -1)
			error_handler(0, -1, argv);
	}

	error_close = close(file_from);

	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_from);
			exit(100);
	}

	error_close = close(file_to);

	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_to);
		exit(100);
	}
	return (0);
}
