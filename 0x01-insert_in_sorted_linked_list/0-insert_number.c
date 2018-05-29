#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_node - inserts a number into a sorted
 * singly linked list
 * @head: head node
 * @number: value to be inserted
 *
 * Return: address of new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node, *temp;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = number;
	node->next = NULL;

	/* add node to empty list */
	if (*head == NULL)
	{
		*head = node;
		return (node);

	/* add node at beginning of list */
	if (node->n < (*head)->n)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	/*traverse and add node in sorted order*/
	temp = *head;
	while (temp->next != NULL && number > temp->next->n)
	{
		temp = temp->next;
	}

	node->next = temp->next;
	temp->next = node;
	return (node);
}
