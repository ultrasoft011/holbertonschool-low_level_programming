#include "holberton.h"

/**
 *rev_string - prints a string in reverse
 *@s: String variable
 */

void rev_string(char *s)
{
int i, j;
char *xstart, *yend, temp;

for (i = 0; s[i] != '\0'; i++)
{

}
xstart = s;
yend = s;

for (j = 0; j < i - 1; j++)
{
yend++;
}

for (j = 0; j < i / 2; j++)
{
temp = *yend;
*yend = *xstart;
*xstart = temp;

xstart++;
yend--;
}
}
