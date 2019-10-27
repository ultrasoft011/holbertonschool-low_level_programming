#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_numbers - prints numbers
*@n: numbers of arguments
*@separator: the separator
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int counter = 0;

va_list allnumbers;
va_start(allnumbers, n);


if (separator == NULL)
{
	separator = "";
}

for (counter = 0; counter < n; counter++)
{
	if (counter != n - 1)
	{
		printf("%d%s", va_arg(allnumbers, int), separator);
	}
	else
	{
		printf("%d", va_arg(allnumbers, int));
	}


}
printf("\n");
va_end(allnumbers);
}
