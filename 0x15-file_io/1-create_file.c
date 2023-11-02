#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: the file name
 * @text_content: the content that the file should hold
 * Return: return an integer
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int nletter;
	int rwr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);

	if (fp == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	for (nletter = 0; text_content[nletter]; nletter++)
		;
	rwr = write(fp, text_content, nletter);

	if (rwr == -1)
		return (-1);
	close(fp);
	return (1);

}
