#include "lists.h"

/**
 * listint_len - program returns the number of elements in
 * a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	for (; h != NULL; nodes++)
		h = h->next;

	return (nodes);
}
