#include <stdio.h>
#include "lists.h"
/**
* add_nodeint - adds a new node at the beginning of a list
* @n: integer
* @head: starting
* Return: the number of elements
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;
newnode = malloc(sizeof(listint_t));

if (newnode == NULL)
{
	return (NULL);
}
newnode->n = n;
newnode->next = *head;
*head = newnode;

return (newnode);
}
