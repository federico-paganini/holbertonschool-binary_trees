#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_node - Creates a node.
 *
 * @parent: Node parent of created node.
 * @value: Value to save in new node.
 *
 * Return: Pointer to the new node. NULL if fails.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
