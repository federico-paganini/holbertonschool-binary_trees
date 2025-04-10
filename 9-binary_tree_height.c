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
	size_t height1 = 0, height2 = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	height1 = binary_tree_height(tree->left);
	height2 = binary_tree_height(tree->right);

	return (1 + (height1 > height2 ? height1 : height2));
}
