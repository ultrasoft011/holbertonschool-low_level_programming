#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - deletes the head node
* @head: head node 
* Return: an integer
*/
int pop_listint(listint_t **head)
{
listint_t *ptrtemp;
int i;

if (*head != NULL)
{
	ptrtemp = *head;
	*head = (*head)->next;
	i = ptrtemp->n;
	free (ptrtemp);
	return(i);
}
return (0);
}
