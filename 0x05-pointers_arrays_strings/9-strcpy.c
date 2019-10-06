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
int j = 0;
while (src[i])
{
i++:
}
for (j = 0; i > j && src[i] != '\0'; j++)
{
dest[j] = src[j];
if (src[j] == '\0')
{
dest[j] = '\0';
}
}
return (dest);
}
