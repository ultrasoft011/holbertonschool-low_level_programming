#include <stdio.h>
#include "lists.h"
/**
*free_list - free a list
*@head: header
*/
void free_list(list_t *head)
{
list_t *ptrfree = head;

while (head != NULL)
{
	free(head->str);
	free(head);
	ptrfree = ptrfree->next;
	head = ptrfree;
}
}
