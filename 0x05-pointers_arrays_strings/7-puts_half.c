#include "holberton.h"
/**
 *puts_half - prints the half of a string
 *@str: Variable
 */

void puts_half(char *str)
{
int j = 0;

for (j = 0; str[j] != '\0'; j++)
{
}
j++;
j = j / 2;

while (str[j] != '\0')
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
