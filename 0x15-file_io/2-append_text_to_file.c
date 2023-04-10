#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append to
 * @text_content: string to append to file
 * Return: 1 on sucess -1 on failure of if filename in NULL
 * If text_content NULL do nothing. Return 1 if file exists
 * return -1 if file does not exist or do not have required permissions
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int nwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		nwr = write(fd, text_content, nletters);

		if (nwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
