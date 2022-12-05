#include "main.h"

/**
 * create_file - create the file
 * @filename; file name
 * @text_content: text
 *
 * Return: 1 or -1
 *
 */

int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	strLen = len(text_content);
	output = write(file, text_content, strLen);
	if (output == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
