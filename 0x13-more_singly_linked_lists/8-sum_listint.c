#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* sum_listint - sum of a list
* @head: head node
* Return: returns return the sum of the data of a list
*/
int sum_listint(listint_t *head)
{
int sum = 0;
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
