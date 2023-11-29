#include "main.h"

/**
 * append_text_to_file - append file at the end of a file
 * @filename: the name of the file
 * @text_content: the text content we are adding
 * Return: it returns 1 if successful
 */




int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rwr, nletters;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);


	}

	close(fd);
	return (1);

}
