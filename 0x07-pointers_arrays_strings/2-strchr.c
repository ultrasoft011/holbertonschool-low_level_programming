#include "holberton.h"
/**
**_strchr - locates a string when found a character
*@s: Pointer to s
*@c: Variable
*Return: a pointer or NULL
*/
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
s = s + i;
return (s);
}
i++;
}
s = 0;
return (s);
}
