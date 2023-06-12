#include "main.h"

/**
 * create_file - This function creates a file
 * @filename: The file to be created
 * @text_content:  a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int w, count, fd;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (0);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}

	count = 0;

	do {
		count++;
	} while (text_content[count]);
	
	w = write(fd, text_content, count);
	if (w == -1)
	{
		return (-1);
	}
	return (1);
}
