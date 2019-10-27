#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_strings - prints strings
*@n: numbers of arguments
*@separator: the separator
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int counter = 0;

va_list allstrings;
va_start(allstrings, n);

if (separator == NULL)
{
	separator = "";
}

for (counter = 1; counter <= n; counter++)
{
	if (counter == '\0')
	{
		printf("nil");
	}
	else if
	(counter == n - 1)
	{
		printf("%s%s", va_arg(allstrings, char *), separator);
	}
	else
	{
		printf("%s", va_arg(allstrings, char *));
	}
}
printf("\n");
va_end(allstrings);
}
