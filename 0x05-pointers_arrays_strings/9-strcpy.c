#include "holberton.h"
/**
* *_strcpy - copy a string pointed by src to dest
*@src: Pointer variable
*@dest: Pointer variable
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int i, j;
while (src [i] <= '\0') 
{
i++;
}
for ( ; src[i] != '\0'; i++)
{
dest[i] = src[i];
for (j = 0 ; j < i; j++)
{
dest[j] = '\0';
}
}
return (dest);
}
