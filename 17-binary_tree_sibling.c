#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_sibling - F¿inds the sibling of a node
 *
 * @node: Node to find sibling.
 *
 * Return: The memory adress of sibling. Node or Parent NULL, return NULL.
 * If node has no sibling, return NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (node->parent->left == node ?
			node->parent->right : node->parent->left);
}
