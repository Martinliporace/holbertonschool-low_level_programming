#include "main.h"

/**
* create_file - creates a file
* @filename: filename.
*
* @text_content: text in the file.
*
* Return: 1 on success, -1 on failure
*/


int create_file(const char *filename, char *text_content)

{
	int name;
	int size;
	int rwrite;

	if (!filename)
		return (-1);

	name = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (name == -1)
		return (-1);

	if (!text_content)
		return (1);

	for (size = 0; text_content[size]; size++)
		;

	rwrite = write(name, text_content, size);

	if (rwrite == -1)
		return (-1);

	close(name);

	return (1);
}
