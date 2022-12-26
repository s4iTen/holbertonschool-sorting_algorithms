#include "sort.h"
/**
 * swapNodes - function that swap two nodes
 * @l: this is the head of the list
 * @a: this is the current node
 */
void swapNodes(listint_t *l, listint_t *a)
{
	listint_t *node1 = a;
	listint_t *node2 = node1->prev;
	listint_t *node1Next = node1->next;
	listint_t *node2Prev = node2->prev;

	node1->next = node2;
	node1->prev = node2Prev;
	node2->prev = node1;
	node2->next = node1Next;
	if (node1Next != NULL)
	{
		node1Next->prev = node2;
	}
	if (node2Prev != NULL)
	{
		node2Prev->next = node1;
	}
	print_list(l);
}
/**
 * insertion_sort_list - this function sort the nodes in linked list
 * @list: this is the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	if (list != NULL)
	{
		listint_t *a = (*list)->next;

		for (a = (*list)->next; a != NULL; a = a->next)
		{
			while (a != NULL && a->prev != NULL && a->n < a->prev->n)
			{
				if (a->prev != NULL)
				{
					if (a->prev->prev == NULL)
					{
						*list = a;
					}
					swapNodes(*list, a);
				}
			}
		}
	}
	else
		return;
}
