#include "main.h"

/**
 * main - Function that copies content of a file to another
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int my_from, my_to, n;
	char *buf[BUFSIZE];

	if (argc > 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (argc < 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	my_from = open(argv[1], O_RDONLY);
	if (my_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	my_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((n = read(my_from, buf, BUFSIZE)) > 0)
		if ((write(my_to, buf, n)) != n || my_to < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	if (n < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(my_from))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", my_from), exit(100);
	if (close(my_to))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", my_to), exit(100);
	return (0);
}
