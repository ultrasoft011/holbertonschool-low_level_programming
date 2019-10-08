#include "holberton.h"
/**
**_strstr - function that locates a substring
*@haystack: pointer
*@needle: pointer
*Return: a pointer or NULL
*/
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;
if (*needle == '\0')
return (haystack);
for (i = 0; haystack[i]; i++)
{
	for (j = 0; needle[j]; j++)
	{
		if (haystack[i + j] != needle[j])
		{
		break;
		}
	}
if (needle[j] == '\0')
return (haystack + i);
}
return (0);
}
