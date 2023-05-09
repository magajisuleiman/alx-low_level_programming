#include "main.h"

/**
 * create_file - make a file
 * @filename: pointer to name of the file to create.
 * @text_content: pointer to string to write to the file.
 *
 *
 * Return: If the function fails - -1.
 */
int create_file(const char *filename, char *text_content)
{
	int filed;
	int wrt;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	filed = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(filed, text_content, len);

	if (filed == -1 || wrt == -1)
		return (-1);

	close(filed);

	return (1);
}

