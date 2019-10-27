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
char *word;
va_list allstrings;
va_start(allstrings, n);


for (counter = 0; counter < n; counter++)
{
	word = va_arg(allstrings, char *);
	if (word == NULL)
	{
		word = "(nil)";
	}
	printf("%s", word);
	if (separator != NULL && (counter + 1 != n))
	{
		printf("%s", separator);

	}
}
printf("\n");
va_end(allstrings);
}
