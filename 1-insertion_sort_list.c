#include "sort.h"

/**
 * insertion_sort_list - Sort list of integers by
 * using insertion sort
 *
 * @list: input list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *prev_node, *next_node;

	if (list && *list && (*list)->next)
	{
		temp = (*list)->next;
		prev_node = temp->prev;
		next_node = temp->next;

		while (temp)
		{
			if (temp->n < prev_node->n)
			{
				swap_list(prev_node, temp, next_node, list);
			}
			temp = next_node;
			if (temp)
			{
				next_node = temp->next;
				prev_node = temp->prev;
			}
		}
	}
}

/**
 * swap_list - Swap position of two nodes in a linked list
 * @pn: Previous node
 * @temp: Temp
 * @nn: Next node
 * @h: Head of list
 */
void swap_list(listint_t *pn, listint_t *temp, listint_t *nn, listint_t **h)
{

	while (pn && temp->n < pn->n)
	{
		if (nn)
			nn->prev = pn;
		temp->next = pn;
		temp->prev = pn->prev;
		if (pn->prev)
			(pn->prev)->next = temp;
		pn->prev = temp;
		pn->next = nn;
		nn = pn;
		pn = temp->prev;
		if ((*h)->prev)
			*h = (*h)->prev;
		print_list(*h);
	}
}
