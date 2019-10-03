#include <stdio.h>
#include "holberton.h"
/**
 *print_array - prints an array
 *@a: Pointer
 *@n: Variable
 */

void print_array(int *a, int n)
{
int counter = 0;

for (counter = 0; counter < n; counter++)
{
if (counter == (n - 1))
{
printf("%d", a[counter]);
}
else
{
printf("%d, ", a[counter]);
}
}
printf("\n");
}
