#include "dog.h"
#include <stdlib.h>
/**
 *_strlen - lenght of a string
 *@s: the string
 *Return: return the lenght
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
* *_strncpy - concatenate two strings
*@dest: Pointer
*@src: Pointer
*@n: n
*Return: a value dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[j] = src[j];
}
for ( ; j < n; j++)
{
dest[j] = '\0';
}
return (dest);
}
/**
*new_dog - creates a new dog
*@name: name
*@age: age
*@owner: owner
*Return: dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p1;
int x, y;

if (name == NULL || owner == NULL)
	return (NULL);
p1 = malloc(sizeof(dog_t));
if (p1 == NULL)
	return (NULL);
x = _strlen(name);
y = _strlen(owner);

p1->name = malloc(sizeof(char) * (x + 1));
if (p1->name == NULL)
	free(p1);
	return (NULL);

p1->owner = malloc(sizeof(char) * (y + 1));
if (p1->owner == NULL)
	free(p1->name);
	free(p1);
	return (NULL);

p1->name = _strncpy(p1->name, name, x + 1);
p1->owner = _strncpy(p1->owner, owner, y + 1);
p1->age = age;
return (p1);
}
