#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
*sum_them_all - sum of all arguments
*@n: numbers of arguments
*Return: the sum
*/
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
	return (0);
}

unsigned int counter = 0;
int sumofall = 0;

va_list allparameters;
va_start(allparameters, n);

for (counter = 0; counter < n; counter++)
{
	sumofall = sumofall + va_arg(allparameters, int);
}
va_end(allparameters);
return (sumofall);
}
