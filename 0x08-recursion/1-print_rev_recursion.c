#include "holberton.h"
/**
*_puts_recursion - print a string
*@s: Pointer to s
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar (*s);
}
}
