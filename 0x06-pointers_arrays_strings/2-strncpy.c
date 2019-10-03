#include "holberton.h"
/**
* *_strncpy - concatenate two strings
*@dest: Pointer
*@src: Pointer
*@n: n
*Return: a value dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int count = 0;
int j = 0;

while (dest[count] != '\0')
{
count++;
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[j] = src[j];
}
for ( ; j < n; j++)
{
dest[j] = '\0';
}
return (dest);
}
