#include "main.h"
#define BUFSIZE (1024)
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * error_exit - prints an error message and exits the program
 * @msg: the error message to print
 * @exit_code: the exit code to use when exiting the program
 */
void error_exit(char *msg, int exit_code)
{
	dprintf(STDERR_FILENO, "%s", msg);
	exit(exit_code);
}

/**
 * main - copies the contents of one file to another file
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the program arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, read_count, write_count;
	char buffer[BUFSIZE];

	if (argc != 3)
		error_exit("Usage: cp file_from file_to\n", 97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}
	do {
		read_count = read(fd_from, buffer, BUFSIZE);
		if (read_count == -1)
			error_exit("Error: Can't read from file\n", 98);
		write_count = write(fd_to, buffer, read_count);
		if (write_count == -1)
			error_exit("Error: Can't write to file\n", 99);
	} while (read_count > 0);
	if (close(fd_from) == -1)
		error_exit("Error: Can't close fd\n", 100);
	if (close(fd_to) == -1)
		error_exit("Error: Can't close fd\n", 100);
	return (0);
}
