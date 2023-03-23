#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all  - sums of all its  parameters.
 * @n: number of parameters
 * Return: sum of all parameters
 */

int sum_them_all(const  unsigned int n, ...)
{

	unsigned int pa, sum = 0;
	va_list  pmtr;
	/* iterate throughh the arguument list from the  sttart */

	va_start(pmtr, n);

	/* iterates  through all parameters value */
	for (pa = 0; pa < n; pa++)
	{
		sum += va_arg(pmtr, int);
	}
	va_end(pmtr);

	return (sum);
}
