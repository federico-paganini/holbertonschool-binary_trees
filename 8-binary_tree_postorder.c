#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Travel the binary tree in post-order
 * @tree: Pointer to node main
 * @func: Function to execute the node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
