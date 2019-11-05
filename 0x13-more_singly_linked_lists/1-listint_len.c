#include <stdio.h>
#include "lists.h"
/**
* listint_len - Write a function that returns the number of elements
* @h: argument
* Return: the number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
return (nodes);
}
