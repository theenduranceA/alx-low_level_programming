#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: Name of the file
 * @text_content: Syring to be added to the file
 *
 * Return: 1 on Success, -1 on Failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int my_write;
	int my_append;
	int len = 0;

	if (filename == NULL)
		return (-1);
	my_append = open(filename, O_WRONLY | O_APPEND);
	if (my_append == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (len = 0; text_content[len];)
		len++;

	my_write = write(my_append, text_content, len);

	close(my_append);
	return (my_write == -1 ? -1 : 1);
}
