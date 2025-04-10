#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree.
 *
 * @tree: Pointer to the root node.
 *
 * Return: Pointer to the new root.
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *nRoot;

	if (!tree || !tree->right)
		return (tree);
	
	nRoot = tree->right;
	tree->right = nRoot->left;

	if (nRoot->left)
		nRoot->left->parent = tree;

	nRoot->left = tree;
	tree->parent = nRoot;

	return (nRoot);
}
