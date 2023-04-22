#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @hd: pointer to the head of the doubly-linked list.
 * @p1: pointer to the first node to swap.
 * @p2: second node to swap.
 */
void swap_nodes(listint_t **hd, listint_t **p1, listint_t *p2)
{
	(*p1)->next = p2->next;
	if (p2->next != NULL)
		p2->next->prev = *p1;
	p2->prev = (*p1)->prev;
	p2->next = *p1;
	if ((*p1)->prev != NULL)
		(*p1)->prev->next = p2;
	else
		*hd = p2;
	(*p1)->prev = p2;
	*p1 = p2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_nodes(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}
