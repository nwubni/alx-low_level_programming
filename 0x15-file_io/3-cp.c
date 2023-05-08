#include "main.h"

/**
* print_error - Displays error message
* @message: Error message
* @arg: Argument
* Return: void
*/

void print_error(const char *message, const char *arg) {
	dprintf(STDERR_FILENO, message, arg);
	exit(EXIT_FAILURE);
}

/**
* main - Program that copies files
* @argc: Number of arguments
* @argv: Argument vector
* Return: Integer
*/

int main(int argc, char *argv[]) {
	int fd_from, fd_to, nread, nwrite;
	const int BUF_SIZE = 1024;
	char buffer[BUF_SIZE];

	if (argc != 3)
		print_error("Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
		print_error("Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (fd_to == -1)
		print_error("Error: Can't write to %s\n", argv[2]);

	while ((nread = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		nwrite = write(fd_to, buffer, nread);

		if (nwrite == -1)
			print_error("Error: Can't write to %s\n", argv[2]);
	}

	if (nread == -1)
		print_error("Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
		print_error("Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		print_error("Error: Can't close fd %d\n", fd_to);

	exit(EXIT_SUCCESS);
}

