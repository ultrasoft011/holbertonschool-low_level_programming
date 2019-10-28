#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*printchar - print a char
*@panything: character
*Return: Printer the char
*/
void printchar(va_list panything)
{
printf("%c", c)
}
/**
*printint - print an integer
*@panything: integer
*Return: Printer the integer
*/
void printint(va_list panything)
{
printfint("%i", i);
}
/**
*printfloat - print a float
*@panything: float
*Return: Printer the float
*/
voidprintfloat(va_list panything)
{
printfint("%f", f);
}
/**
*printfstring - print a float
*@panything: string
*Return: Printer the float
*/
void printfstring(va_list panything)
{
printfint("%s", s);
}

/**
*print_all - print anything
*@format: format
*/
void print_all(const char * const format, ...)
{
va_list panything;
va_start(panything, format);
int count = 0, count2 = 0, i = 0;

ultra array[] = {
{'c', printchar},
{'i', printint},
{'f', printfloat},
{'s', printfstring},
};

while (count2 <= format)
{
while (count <= 3)
{
if (array[count].s == (*format))
{
return (array[count].f);
}
count++;
}
count2++;
}
