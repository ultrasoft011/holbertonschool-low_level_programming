#include <stdio.h>
#include <stdlib.h>
/**
* create_array - creates an array of characters
*@size: size of the array
*@c: character
*Return: the pointer
*/
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *ptr;
ptr = malloc(size * sizeof(char));
if (size == 0 || ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
