#include "lists.h"
#include <stdio.h>
/**
* list_len - returns the number of elements in a linked list
* @h: argument
* Return: the number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t ofNodes = 0;

	while (h != NULL)
	{
		ofNodes++;
		h = h->next;
	}
	return (ofNodes);
}
