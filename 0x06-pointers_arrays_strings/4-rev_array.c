#include "holberton.h"

/**
 *reverse_array - array in reverse
 *@a: Pointer
 *@n: Variable
  */

void reverse_array(int *a, int n)
{
int j;
char *xstart, *yend, temp;

for (j = 0; a[j] < n - 1; j++)
{
yend++;
}

for (j = 0; a[j]< n / 2; j++)
{
temp = *yend;
*yend = *xstart;
*xstart = temp;

xstart++;
yend--;
}
}
