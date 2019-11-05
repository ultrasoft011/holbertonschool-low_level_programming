#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint_end - adds a new node at the end of a list
* @n: integer
* @head: starting
* Return: the number of elements
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode;
newnode = malloc(sizeof(listint_t));
listint_t *last = *head;
newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
	*head = newnode;
	return (NULL);
}
while (last->next != NULL)
{
	last = last->next;
}
last->next = newnode;
return (newnode);
}
