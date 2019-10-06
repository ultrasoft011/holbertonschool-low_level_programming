#include "holberton.h"
/**
* *_strcpy - copy a string pointed by src to dest
*@src: Pointer variable
*@dest: Pointer variable
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
if (src[i] == '\0')
{
dest[i] = '\0';
}
}
return (dest);
}
