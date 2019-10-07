#include "holberton.h"
/**
**_strpbrk - searches a string for any of a set of bytes
*@s: Pointer to s
*@accept: Variable
*Return: a pointer or NULL
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j = 0;
for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; s[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
	s = s + i;
	return (s);
	}
	}
	}
	s = 0;
	return (s);
}
