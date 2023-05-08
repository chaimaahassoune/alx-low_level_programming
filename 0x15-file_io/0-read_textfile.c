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
	int f;
	ssize_t br, bw;
	char *buf;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
	{
		close(f);
		return (0);
	}
	br = read(f, buf, letters);
	if (bf == -1)
	{
		free(buf);
		close(f);
		return (0);
	}
	bw = write(STDOUT_FILENO, buf, br);
	if (bw == -1 || br != bw)
	{
		free(buf);
		close(f);
		return (0);
	}
	free(buf);
	close(f);

	return (bw);
}
