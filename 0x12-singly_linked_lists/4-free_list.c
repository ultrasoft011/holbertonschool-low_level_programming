#include <stdio.h>
#include "lists.h"
/**
*free_list - free a list
*@head: header
*/
void free_list(list_t *head)
{
list_t *ptrfree;

while (head != NULL)
{
	ptrfree = head;
	head = head->next;
	free(ptrfree);
}
}
