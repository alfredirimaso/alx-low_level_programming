#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_descriptor, length = 0;

	if (!filename)
		return (-1);
	f_descriptor = open(filename, O_RDWR | O_APPEND);
	if (f_descriptor < 0)
		return (-1);
	if (!text_content)
	{
		close(f_descriptor);
		return (1);
	}

	while (text_content[length])
		length++;
	if (write(f_descriptor, text_content, length) < 0)
	{
		close(f_descriptor);
		return (-1);
	}
	close(f_descriptor);
	return (1);
}

