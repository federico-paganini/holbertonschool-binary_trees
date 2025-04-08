#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 * of another node.
 *
 * @parent: Pointer to the node to insert the child.
 * @value: Value to store in the new node.
 *
 * Return: A pointer to the created node.
 * NULL if fails or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = binary_tree_node(parent, value);

	if (newNode && !parent)
	{
		free(newNode);
		return (NULL);
	}

	if (!newNode)
		return (NULL);

	if (parent->right)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}

	parent->right = newNode;

	return (newNode);
}
