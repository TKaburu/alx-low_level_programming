#include "main.h"
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * main - entry point to the program
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 when successfull
 */

int main(int argc, char *argv[])
{
	int ff, ft, r_bytes, w_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	ff = open(argv[1], O_RDONLY);
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[2]);
		exit(98);
	}
	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}

	while ((r_bytes = read(ff, buffer, BUFFER_SIZE)) > 0)
	{
		w_bytes = write(ft, buffer, r_bytes);
		if (w_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	
	if (r_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(97);
		}

	if (close(ff) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
			exit(100);
		}

	if (close(ft) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft);
			exit(100);
		}
	return (0);
}

