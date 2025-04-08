#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node to the left of another node
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 *
 * Return: Pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (parent == NULL && new_node != NULL)
	{
	free(new_node);
	return (NULL);	
	}

	if (new_node == NULL)
	return (NULL);

	if (parent->left != NULL)
	{
	new_node->left = parent->left;
	parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
