#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree.
 *
 * @tree: Pointer to the root node.
 *
 * Return: Pointer to the new root.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *nRoot;

	if (!tree || !tree->left)
		return (tree);

	nRoot = tree->left;
	tree->left = nRoot->right;

	if (nRoot->right)
		nRoot->right->parent = tree;

	nRoot->right = tree;
	tree->parent = nRoot;

	return (nRoot);
}
