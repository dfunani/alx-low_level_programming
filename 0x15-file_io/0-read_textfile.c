#include "main.h"

/**
 * read_textfile - read text file
 * @filename: file name
 * @letters: what to print
 *
 * Return: sizet
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t output, text;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if ( file == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);
	text = read(file, buffer, letters);
	if (text == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	output = write(STDOUT_FILENO, buffer, letters);
	if (output == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	close(file);
	free(buffer);
	return (text);
}
