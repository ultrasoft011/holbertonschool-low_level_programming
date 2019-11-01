#include "lists.h"
#include <stdio.h>
/**
* print_list - Write a function that prints all the elements of a list_t list
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
