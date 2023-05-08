#include "main.h"

/**
 * create_file -  where filename is the name of the file to create 
 * @filename: THis is a pointer to the name of the file thst we created
 * @text_content:  is a NULL terminated string to write to the file
 * Return: It returns -1 if the function fails and 1 if the function is successful
 */

int create_file(const char *filename, char *text_content)
{
	int lng = 0;
	int gon = 0;
	int txt = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (txt = 0; text_content[txt];)
		{
			txt++;
		}
	}

	lng = open(filename, O_CREAT | O_TRUNC, 0600);
	gon = write(lng, text_content, lng);

	if (lng == -1 || gon == -1)
	{
		return (-1);
	}
	close(lng);

	return (1);
}
