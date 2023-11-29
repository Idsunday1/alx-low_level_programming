#include "main.h"

/**
 * create_file - appends text at the end of a file
 * @filename: A pointer to the name of the file
 * @text_content: The string to add to the end of the file
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1
 *         otherwise - 1
 */
int create_file(const char *filename, char *text_content)
{
	int O, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	O = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
	if (O == -1)
		return (-1);

	w = write(O, text_content, len);

	if (w == -1)
	{
		close(O);
		return (-1);
	}

	close(O);

	return (1);
}
