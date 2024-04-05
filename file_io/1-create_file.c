#include "main.h"

/**
 * create_file - create a function that creates a file.
 *
 * @filename: a pointer to the name of the file to create.
 * @text_content: a pointer to a string to write to the file.
 *
 * Return: If the function fails -1.
*/

int create_file(const char *filename, char *text_content)
{
	int fo, fw, len = 0;

	if (!filename)
	{
		return (-1);
	}

	if (!text_content)
	{
		while (len[text_content])
		{
			len++;
		}
	}
	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	fw = write(fo, text_content, len);

	if (fo == -1 || fw == -1)
	{
		return (-1);
	}
	close(fo);
	return (1);
}
