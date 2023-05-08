#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - THe Text file should  and and be printed to STDOUT
 * @filename : The text file that will be  read
 * @letters : The  numbers of letters  to  be read
 * RETURN: Returns the actual memory allocated when the function fails or file is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *lng;
	ssize_t kno;
	ssize_t twy;
	ssize_t wyt;

	kno = open(filename, O_RDONLY);
	if (kno == -1)
	{
		return (0);
	}
	lng = malloc(sizeof(char) * letters);
	wyt = read(kno, lng, letters);
	twy = write(STDOUT_FILENO, lng, wyt);

	free(lng);
	close(kno);
	return (twy);
}
