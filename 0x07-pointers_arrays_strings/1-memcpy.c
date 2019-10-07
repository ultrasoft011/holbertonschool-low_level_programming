#include "holberton.h"
/**
**_memcpy - copy block of memory
*@dest: Dest pointer
*@src: src pointer
*@n: number of bytes
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
