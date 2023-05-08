#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: Name of file to be created
 * @text_content: String to write to the file
 *
 * Return: 1 on Success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int my_file;
	int my_write;
	int len = 0;

	if (filename == NULL)
		return (-1);
	my_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (my_file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(my_file);
		return (1);
	}
	for (len = 0; text_content[len];)
		len++;

	my_write = write(my_file, text_content, len);
	if (my_file == -1)
		return (-1);
	if (my_file == -1)
		return (-1);
	return (my_write == -1 ? -1 : 1);
}
