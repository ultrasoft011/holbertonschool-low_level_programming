#include <stdio.h>
#include "lists.h"
/**
* free_listint - adds a new node at the beginning of a list
* @head: header
*/
void free_listint(listint_t *head)
{
	listint_t *ptrfree;

while (head != NULL)
{
	ptrfree = head;
	head = head->next;
	free(ptrfree);
}
}
