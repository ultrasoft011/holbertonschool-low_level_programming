#include "function_pointers.h"
/**
 * print_name - print name
 * @name: name
 * @f: Pointer to a function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
