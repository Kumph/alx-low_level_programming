#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to the POSIX stdout
 * @filename: pointer to file to read from
 * @letters: number of letter to read and print
 * Return: actual number of letter it could read and print
 * return 0 if file cannot be openned, filename is NULL or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_rd, num_wrt;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc((sizeof(char) * letters));
	if (buf == NULL)
		return (0);

	num_rd = read(fd, buf, letters);
	num_wrt = write(STDOUT_FILENO, buf, num_rd);

	close(fd);

	free(buf);

	return (num_wrt);
}
