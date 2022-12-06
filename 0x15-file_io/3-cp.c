#include "main.h"

/**
 * close_handler - err handler
 * @fd: fd to close
 *
 */

void close_handler(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * cpyFile - cpy
 * @src: file src
 * @dest: file dest
 * @name_src: name of src
 * @name_dest: name of dest
 *
 */

void cpyFile(int src, int dest, char *name_src, char *name_dest)
{
	int text_r, text_w, closed;
	char *buffer;

	buffer = malloc(sizeof(char) * 1025);
	text_r = read(src, buffer, 1024);
	while (text_r != 0)
	{
		if (text_r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				name_src);
			close(src);
			free(buffer);
			exit(98);
		}
		text_w = write(dest, buffer, text_r);
		if (text_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				name_dest);
			close(src);
			free(buffer);
			exit(99);
		}
	}
	free(buffer);
	closed = close(src);
	if (closed == -1)
		close_handler(src);
	closed = close(dest);
	if (closed == -1)
		close_handler(dest);
}

/**
 * main - entry
 * @argc: count
 * @argv: arguments
 *
 * Return: 0 or 1 or 98
 *
 */

int main(int argc, char **argv)
{
	int src, dest;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		close(src);
		exit(98);
	}
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	cpyFile(src, dest, argv[1], argv[2]);
	return (0);
}
