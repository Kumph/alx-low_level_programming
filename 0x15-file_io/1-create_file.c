#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: Null terminated string to write to created file
 * Return: 1 on sucess -1 on failure
 * return -1 if filename is NULL
 * create empty file if text_content is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int nwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	nwr = write(fd, text_content, nletters);

	if (nwr == -1)
		return (-1);

	close(fd);

	return (1);
}
