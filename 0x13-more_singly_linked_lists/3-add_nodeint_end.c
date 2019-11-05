#include <stdio.h>
#include "lists.h"
/**
* add_nodeint_end - adds a new node at the end of a list
* @n: integer
* @head: starting
* Return: the number of elements
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
/* 1. allocate node */
listint_t *newnode;
newnode = malloc(sizeof(listint_t));
/* 2. create the last node (temp) */
listint_t *last = *head;
/* 3. put in the data  */
newnode->n = n;
/* 4. make next of it as NULL */
newnode->next = NULL;
/* 5. if the Linked List is empty, then make the new node as head */
if (*head == NULL)
{
*head = newnode;
return (NULL);
}
/* 6. Else traverse till the last node */
while (last->next != NULL)
	last = last->next;
/* 7. Change the next of last node */
last->next = newnode;
return (newnode);
}
