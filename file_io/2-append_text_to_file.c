#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename: the name of the file
 * @text_content: the string to add to the end of the file.
 *
 * Return: 1 for success and -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
	}

	fo = open(filename, O_WRONLY | O_APPEND);
	fw = write(fo, text_content, len);

	if (fo == -1 || fw == -1)
	{
		return (-1);
	}
	close(fo);
	return (1);
}
