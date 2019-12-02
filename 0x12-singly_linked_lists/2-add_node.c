#include "lists.h"
#include <stdio.h>
/**
* list_len - returns the number of elements in a linked list
* @h: argument
* Return: the number of nodes
*/
list_t *add_node(list_t **head, const char *str)
void push(struct Node** head_ref, int new_data) 
{
/* 1. allocate node */
struct list_t* new_node = (struct list_t*) malloc(sizeof(struct list_t)); 
   
    /* 2. put in the data  *
    new_node->data  = new_data; 
   
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref); 
   
    /* 4. move the head to point to the new node */
    (*head_ref)    = new_node; 
} 