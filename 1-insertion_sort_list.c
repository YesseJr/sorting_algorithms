/*
 * File: 1-insertion_sort.c
 * Author: Waython Yesse
 * Occupation: Software Engineering Student at ALX
 * Address: waythonny@yahoo.com
 * Year: 2022 January 10
 * ** HAPPY NEW YEAR, HAPPY NEW CODE **
 */


#include "sort.h"

/**
 * insertion_sort_list - Performs insertion sort on a doubly linked list of
 * integers in ascending order.
 *
 * @list: A double pointer to the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *currnode;
	listint_t *prevnode;
	listint_t *nextnode;

	if (list == NULL || *list == NULL)
		return;

	currnode = (*list)->next;
	while (currnode != NULL)
	{
		nextnode = currnode->next;
		prevnode = currnode->prev;
		if (prevnode && currnode->n < prevnode->n)
		{
			prevnode->next = currnode->next;
			if (nxt != NULL)
				nextnode->prev = prevnode;
			prevnode = prevnode->prev;
			if (prevnode == NULL)
			{
				currnode->prev = NULL;
				currnode->next = *list;
				(*list)->prev = currnode;
				*list = currnode;
			}
			else
			{
				currnode->prev = prevnode;
				currnode->next = prevnode->next;
				prevnode->next->prev = currnode;
				prevnode->next = currnode;
			}
			print_list(*list);
		}
		else
		{
			currnode = nextnode;
		}
	}
}
