#include "holberton.h"
/**
**_strstr - function that locates a substring
*@haystack: pointer 
*@needle: pointer
*Return: a pointer or NULL
*/
char *_strstr(char *haystack, char *needle)
{
while(*haystack != '\0')
{
if(*haystack == *needle)
{
return (needle);
break;
}
else
{
haystack++;
}
}
}
