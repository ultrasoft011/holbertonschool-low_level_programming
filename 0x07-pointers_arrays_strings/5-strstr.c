#include "holberton.h"
/**
**_strstr - function that locates a substring
*@haystack: pointer 
*@needle: pointer
*Return: a pointer or NULL
*/
char *_strstr(char *haystack, char *needle)
{
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i] == needle[j])
{
haystack = haystack + j;
return (haystack);
}
}
s = 0;
return (s);
}
}
