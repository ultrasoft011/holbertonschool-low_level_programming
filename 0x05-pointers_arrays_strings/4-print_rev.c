#include "holberton.h"
/**
 *print_rev - print reverse
 *@s: string
 *Return:
 */
void print_rev(char *s)
{
int i;

while (s[i] != '\0')
{
i++;
}
i--;
for (; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
