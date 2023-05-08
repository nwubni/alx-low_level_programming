#include "main.h"

/**
* append_text_to_file - Appends text to exisiting file
* @filename: File name
* @text_content: Text to append
* Return: Integer
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL) 
	{
		while (text_content[len] != '\0')
			len++;

		wr = write(fd, text_content, len);

		if (wr == -1) {
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

