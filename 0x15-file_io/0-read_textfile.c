#include "main.h"
/**
 *read_textfile - reads a text file and prints to POSIX stdout
 *@filename: name to file to read
 *@letters: the number of letter to read and print
 *
 *Return: 0 if file cannot be opened and written to, also if filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, j;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	i = read(fd, buf, letters);
	if (i == -1)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';

	close(fd);

	j = write(STDOUT_FILENO, buf, i);
	if (j == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (j);

}

