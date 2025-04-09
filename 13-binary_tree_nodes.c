#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 *
 * @tree: The tree to count the nodes with childs.
 *
 * Return: The number of nodes with childs. NULL if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->right || tree->left)
		return (1 + binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right));

	return (0);
}
