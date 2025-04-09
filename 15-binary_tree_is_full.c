#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: Tree to check.
 *
 * Return: 1 if the tree is full. 0 if not.
 * 0 if tree is NULLL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	return (0);
}
