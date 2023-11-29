#include "main.h"

/**
 * read_textfile - a function that reads a text
 * file and prints it to the POSIX standard output
 * @filename: takes in the file name
 * @letters: the letters it wants printed
 * Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedata;
	ssize_t rd, nwr;
	char *buffer;

	if (filename == NULL)
		return (-1);
	filedata = open(filename, O_RDONLY);
	if (filedata == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	rd = read(filedata, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, rd);
	close(filedata);
	free(buffer);
	return (nwr);
}
