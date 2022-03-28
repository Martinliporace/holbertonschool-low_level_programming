#include "main.h"

/**
* read_textfile - reads a text file and printsit to the POSIX standard output.
* @filename: filename.
* @letters: the number of letters it should read and print
*
* Return:  the actual number of letters it could read and print
*/


ssize_t read_textfile(const char *filename, size_t letters)

{
	int name;
	ssize_t sread, swrite;
	char *aux;

	if (!filename)
		return (0);

	name = open(filename, O_RDONLY);

	if (name == -1)
		return (0);

	aux = malloc(sizeof(char) * (letters));
	if (!aux)
		return (0);

	sread = read(name, aux, letters);
	swrite = write(STDOUT_FILENO, aux, sread);

	close(name);

	free(aux);

	return (swrite);
}
