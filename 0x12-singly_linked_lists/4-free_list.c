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
	free(ptrfree->str);
	free(head);
	ptrfree = head;
	ptrfree = ptrfree->next;
}
}
