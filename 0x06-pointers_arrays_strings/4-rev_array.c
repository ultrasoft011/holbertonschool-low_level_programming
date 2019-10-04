#include "holberton.h"

/**
 *reverse_array - array in reverse
 *@a: Pointer
 *@n: Variable
 */

void reverse_array(int *a, int n)
{

int i;
int j;
int temp;

for (i = 0, j = n - 1; j >= i; i++, j--)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
