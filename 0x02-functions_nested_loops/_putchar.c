#include "main.h"
#include <unistd.h>


/**
 *  _putchar -Writes the character c to stdout 
 *  @c :the character to print
 *  Return: to return 1 when successful
 *  On error, -1 is returned and errno is set appropraitely
 */

int _putchar(char c)
{

	return (write(1, &c, 1));

}
