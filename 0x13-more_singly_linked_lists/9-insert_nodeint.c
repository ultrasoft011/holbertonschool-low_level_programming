#include "lists.h"
/**
* insert_nodeint_at_index - insert a node at index
* @head: the header
* @idx: the position
* @n: the value
* Return: the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *tmp;
listint_t *newnode = malloc(sizeof(listint_t));
unsigned int i;
if (newnode == NULL)
	return (NULL);

	if (idx == 0)
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}

	for (i = 0; i < idx; i++)
	{
		*head = (*head)->next;
	}
tmp = *head;
(*head)->next = newnode;
tmp = tmp->next;
newnode->n = n;
newnode->next = tmp;
return (newnode);
}
