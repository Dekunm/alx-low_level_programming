#include "main.h"

/**
 * append_text_to_file - This  Function can append text to the end of the file
 * @filename: Thiis is thename of the file
 * @text_content: This  is the NuLL terminated string added to thr end of the file
 * Return: It returns 1 on success and -1 on fallure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x = 0;
	int y = 0;
	int z = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
		z++;
	}
	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, z);
	if (x == -1 || y == -1)
		return (-1);
	close(x);

	return (1);

}
