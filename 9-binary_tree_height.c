#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height -  Measures the height of a binary tree.
 *
 * @tree: Tree to measure.
 *
 * Return: The height of the tree. 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
		return (0);

	height += tree->right ? 1 : 0;
	height += tree->left ? 1 : 0;

	return (height);
}
