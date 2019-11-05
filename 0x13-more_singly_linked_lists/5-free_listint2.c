#include <stdio.h>
#include "lists.h"
/**
* free_listint - adds a new node at the beginning of a list
* @head: header
*/
void free_listint2(listint_t **head)
{
	listint_t *ptrfree;

	if (head != NULL)
	{	
		return;
	}
	ptrfree = *head;

	while (ptrfree)
	{
		ptrfree = ptrfree->next;
		free(*head);
		*head = ptrfree;
	}
	head = NULL;
}
