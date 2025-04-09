#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: The tree to measure the size.
 *
 * Return: The size of the tree. NULL if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (NULL);

	return (1 + (binary_tree_t(tree->left) + binary_tree_t(tree->right)));
}
