#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* get_nodeint_at_index - get a node of a list
* @head: head node
* @index: the index
* Return: returns the nth node of a list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head)
	{
		if (count == index)
		{
			return (head);
		}
	count++;
	head = head->next;
	}
return (head);
}
