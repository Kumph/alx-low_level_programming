#include "main.h"

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 * if the number of argument is not correct, exit(97)
 * if file_to already exists, truncate it
 * if file_from does not exist, or if you can not read it
 * exit(98)
 * if you can not create or if write to file_to fails, exit(99)
 * if you can not close a file descriptor , exit with code 100 
 * and print Error
 */
int main(int argc, char *argv[])
{
	char *buffer;
	const char *file_from; 
	const char *file_to;
	int from, to, rd, wrt, c, c1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	from = open(file_from, O_RDONLY);
	to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	rd = read(from, buffer, 1024);
	
	while (r > 0) {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
			free(buffer);
			exit(98);
		}

		wrt = write(to,buffer, rd);
		if (to == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", to);
			free(buffer);
			exit(99);
		}

		rd = read(from, buffer, 1024);
		to = open(file_to, O_WRONLY | O_APPEND);
	}

	free(buffer);
	c = close(file_from);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", argv[0]);
		exit(100);
	}
	c1 = close(file_to);
	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", argv[0]);
                exit(100);
	}
	return (0)a;
}

