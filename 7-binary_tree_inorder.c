#include "binary_trees.h"
#include <stdio.h>
#include <stddef.h>

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 *
 * @tree: Root node of the tree.
 * @func: Function to call using in-order traversal.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left);
	func(tree->n);
	binary_tree_inorder(tree->right);
}
