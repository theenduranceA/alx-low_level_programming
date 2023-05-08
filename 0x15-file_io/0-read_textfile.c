#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: Text file to be read
 * @letters:  Number of letters to be read
 *
 * Return: Number of letters read & printed
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	int my_text_file;
	int my_read_print = 0;
	int my_read = 1;
	char *buf[BUFSIZE];

	if (filename == NULL)
		return (0);
	my_text_file = open(filename, O_RDONLY);
	if (my_text_file == -1)
		return (0);
	while (letters > BUFSIZE && my_read != 0)
	{
		my_read = read(my_text_file, buf, BUFSIZE);
		write(STDOUT_FILENO, buf, my_read);
		my_read_print = my_read_print + my_read;
		letters = letters - BUFSIZE;
	}
	my_read = read(my_text_file, buf, letters);
	write(STDOUT_FILENO, buf, my_read);
	my_read_print = my_read_print + my_read;
	close(my_text_file);
	return (my_read_print);
}

