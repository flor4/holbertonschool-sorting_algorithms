#include "sort.h"

/**
 * swap_nodes - Swaps two adjacent nodes in a doubly linked list
 * @list: Double pointer to the head of the list
 * @left: The left node (must come before in the list)
 * @right: The right node (must come after in the list)
 *
 * Return: Nothing
 */
void swap_nodes(listint_t **list, listint_t *left, listint_t *right)
{
	if (!left || !right || !list || !*list)
	{
		return;
	}

	if (left->prev)
	{
		left->prev->next = right;
	}

	else
	{
		*list = right;
	}

	if (right->next)
	{
		right->next->prev = left;
	}

	right->prev = left->prev;
	left->next = right->next;
	right->next = left;
	left->prev = right;
}

/**
* insertion_sort_list - Sorts a doubly linked list of integers
*                       in ascending order using the Insertion sort algorithm
* @list: Double pointer to the head of the list
*
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	if (!list || !*list || !(*list)->next)
	{
		return;
	}

	listint_t *current = (*list)->next;

	while (current)
	{
		listint_t *to_insert = current;

		listint_t *prev = current->prev;

			while (prev && prev->n > to_insert->n)
			{
				swap_nodes(list, prev, to_insert);
				print_list(*list);
				prev = to_insert->prev;
			}

		current = to_insert->next;
	}
}
