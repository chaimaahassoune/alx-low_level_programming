#include "main.h"

/**
 * create_file - creates the file
 *
 * @filename: the name of the file
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, result, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		result = write(fd, text_content, length);
		if (result == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
