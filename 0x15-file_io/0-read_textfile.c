#include "main.h"

/**
* read_textfile - Function to read content of a text file
* @filename: File name
* @letters: Number of letters to read and print
* Return: Number of letters read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char buffer[letters];
	ssize_t bytes_read = read(fd, buffer, letters);
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (filename == NULL)
		return (0);

	if (fd == -1)
		return (0);

	if (bytes_read == -1) {
		close(fd);
		return (0);
	}

	close(fd);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
