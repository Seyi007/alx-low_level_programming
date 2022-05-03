#include "main.h"
/**
 *create_file - creates a file
 *@filename: the ame of file to create
 *@text_content: a null terminated string to write to file
 *give read write permission to file
 *truncate if file already exists
 *
 *Return: 1 if successful and -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, count = 0;

	if (filename == NULL)
		return (-1);


	fd = creat(filename, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[count])
			count++;

		i = write(fd, text_content, count);
		if (i == -1)
		{
			return (-1);
		}
	}

	return(1);
}


