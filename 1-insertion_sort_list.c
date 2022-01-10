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
 * insertion_sort_list - inserts right unsorted side into left sorted side
 * @list: doubly linked list to sort
 *
 */
void insertion_sort_list(listint_t **list)
{
	listin_t *cur;
    listint_t *prv;
    listint_t *nxt;

	if (list == NULL || (*list)->next == NULL)
		return;

	cur = (*list)->next;
	nxt = cur->next;
	while (c)
	{
		if (cur->n < cur->prev->n)
		{
			p = c->prev;
			while (prv && (cur->n < prv->n))
			{
				if (!(prv->prev))
				{
					prv->prev = cur;
					cur->prev->next = cur->next;
					if (cur->next)
						cur->next->prev = cur->prev;
					cur->next = prv;
					cur->prev = NULL;
					*list = cur;
				}
				else
				{
					cur->prev->next = cur->next;
					if (cur->next)
						cur->next->prev = cur->prev;
					prv->prev->next = cur;
					cur->prev = prv->prev;
					prv->prev = cur;
					cur->next = prv;
				}
				print_list(*list);
				prv = cur->prev;
			}
		}
		cur = nxt;
		cur ? (nxt = c->next) : (nxt = NULL);
	}
}
