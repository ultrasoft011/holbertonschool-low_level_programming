#include "holberton.h"
/**
**_memset - fills a block of memory
*@s: Pointer to s
*@b: Variable
*@n: number of bytes
*Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
