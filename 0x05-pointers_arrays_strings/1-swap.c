#include "holberton.h"
/**
 *swap_int - swap two intengers
 *@a: Variable 1
 *@b: Variable 2
 *Return:
 */
void swap_int(int *a, int *b)
{
int c;

c = *b;
*b = *a;
*a = c;
}
