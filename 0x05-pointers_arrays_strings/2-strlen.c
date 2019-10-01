#include "holberton.h"
/**
 *_strlen - lenght of a string
 *@s - the string
 *Return: return the lenght
 */
int _strlen(char *s)
{

int i;

while (s[i] != '\0')
{
i++;
}
return (i);
}
