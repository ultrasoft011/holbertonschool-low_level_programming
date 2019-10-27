#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
*sum_them_all - sum all the parameters
*@n: numbers of arguments
*Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{

unsigned int counter = 0;
int sumofall = 0;

va_list allparameters;
va_start(allparameters, n);

if (n == 0)
{
	return (0);
}

for (counter = 0; counter < n; counter++)
{
	sumofall = sumofall + va_arg(allparameters, int);
}
va_end(allparameters);
return (sumofall);
}
