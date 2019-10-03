#include "holberton.h"
/**
 **_strcat - concatenate two strings
 *@dest: Pointer
 *@src: Pointer
 *Return: a value dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

for (i = 0; dest[i] != '\0'; i++)
{
dest[i] = dest[i];
}

for (j = 0 ; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
