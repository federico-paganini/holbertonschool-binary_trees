#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes.
 *
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common ancestor. No ancestors return NULL.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t depth1, depth2;

	if (!first || !second)
		return (NULL);

	depth1 = binary_tree_depth(first);
	depth2 = binary_tree_depth(second);

	while (depth1 > depth2)
	{
		first = first->parent;
		depth1--;
	}

	while (depth2 > depth1)
	{
		second = second->parent;
		depth2--;
	}

	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}

	return (NULL);
}
