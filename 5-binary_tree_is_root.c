#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root.
 *
 * @node: Node to check.
 *
 * Return: 1 if node is a root. Otherwise 0. If node is NULL 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
