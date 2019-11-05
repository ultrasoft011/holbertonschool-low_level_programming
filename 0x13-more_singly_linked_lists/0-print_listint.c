#include <stdio.h>
#include "lists.h"
/**
* print_listint - Write a function that prints all the elements of a list
* @h: argument
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;

	}
return (nodes);
}
