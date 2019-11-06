#include "lists.h"
#include <stdlib.h>
/**
* insert_nodeint_at_index - insert a node at index
* @head: the header
* @idx: the position
* @n: the value
* Return: the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *tmp;

listint_t *newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
	return (NULL);

newnode->n = n;
tmp = *head;

	if (idx == 0)
	{
		newnode->next = tmp;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (tmp->next == NULL || tmp == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
	}

newnode->next = tmp->next;
tmp->next = newnode;

return (newnode);
}
