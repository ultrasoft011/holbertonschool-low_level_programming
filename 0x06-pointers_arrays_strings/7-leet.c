#include "holberton.h"
/**
* *leet - leet speak
*@a: Pointer variable
*Return: 0
*/
char *leet(char *a)
{
int i = 0;
int j = 0;

char testarr1[] = "aeotl";
char testarr2[] = "AEOTL";
char numbers[]= "43071";

while (a[i])
{
for (j = 0; testarr1[j] && testarr2[j]; j++)
{
if (a[i] == testarr1[j] || a[i] == testarr2[j])
{
a[i] = numbers[j];
}
}
i++;
}
