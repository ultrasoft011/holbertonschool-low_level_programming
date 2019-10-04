#include "holberton.h"
/**
 * *cap_string - Capitalizates each word of a string
 *@s: Pointer
 *Return: s
 */

char *cap_string(char *s)
{

int i = 0;
int j = 0;
int a[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

for (i = 0; s[i]; i++)
{
for (j = 0; s[j]; j++)
{
if (s[i] == a[j])
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = s[i + 1] - 32;
}
}
if (i == 0)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}

}
}
}
return (s);
}
