#include "holberton.h"
/**
* *_strcpy - copy a string pointed by src to dest 
*@src: Variable
*@dest: Variable
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int i, j;

while (src [i]) 
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
