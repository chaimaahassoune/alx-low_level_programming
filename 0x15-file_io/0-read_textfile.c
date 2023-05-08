#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: it return a actual number of letters read and printed, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t of, rf, wf;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	of = open(filename, O_RDONLY);
	rf = read(of, buffer, letters);
	wf = write(STDOUT_FILENO, buffer, rf);

	if (of == -1 || rf == -1 || wf == -1 || wf != rf)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(of);
	return (wf);
}
