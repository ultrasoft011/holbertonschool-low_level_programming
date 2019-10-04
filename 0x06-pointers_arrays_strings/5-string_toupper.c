#include "holberton.h"
/**
 * *string_toupper - Lowercase to Uppercase
 *@s: Pointer
 *Return: s
 */
char *string_toupper(char *s)
{
int i;

while (s[i])
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
