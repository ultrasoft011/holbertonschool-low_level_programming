#include "holberton.h"
/**
* *_strncat - concatenate two strings
*@dest: Pointer
*@src: Pointer
*@n: entry value
*Return: a value dest
*/

char *_strncat(char *dest, char *src, int n)
{

int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
