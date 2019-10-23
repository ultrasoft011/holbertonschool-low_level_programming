#include <stdlib.h>
#include <stdio.h>
/**
* print_name - print name
* @name: name
* @f: Pointer to a function
* Return:
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;

f(name);
}
