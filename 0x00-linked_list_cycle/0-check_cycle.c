#include "lists.h"
/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: listint_t list to be checked
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	/**
	 * 1. If the current node is already in our set
	 * we have a cycle. Return 1
	 * 2. If the current node is NULL, we've hit the end of the list. Return 0
	 * Else throw the current node in our set and keep going
	 */

	const listint_t *slow = list;
	const listint_t *fast = list;


	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;


		if (fast == slow)
		{
			return (1);
		}
	}
	return (0);
}
