#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*printchar - print a char
*@c: character
*Return: Printer the char
*/
void printchar(va_list[])
{
	printf("%c", c);
}
/**
*printint - print an integer
*@i: integer
*Return: Printer the integer
*/
void printint()
{
	printfint("%i", i);
}
/**
*printfloat - print a float
*@f: float
*Return: Printer the float
*/
void printfloat()
{
	printfint("%f", f);
}
/**
*printfstring - print a float
*@s: string
*Return: Printer the float
*/
void printfstring()
{
	printfint("%s", s);
}

/**
*printall - print anything
*@format: format
*/
void print_all(const char * const format, ...)
{
va_list panything;
va_start (panything, format);
int count = 0, count2 = 0, i = 0;

ultra array[] = {
	{'c', printchar},
	{'i', printint},
	{'f', printfloat},
	{'s', printfstring},
	{NULL, NULL}
};

char y = va_arg(panything, const);

while (count2 <= format)
{
	while (count <= 3)
	{
		if (array[count].s == (*format))
		{
		return(array[count].f);
	}count++;

}count2++;
}
