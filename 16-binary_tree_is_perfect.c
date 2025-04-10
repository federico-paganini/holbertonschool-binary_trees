#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: The tree to measure the size.
 *
 * Return: The size of the tree. NULL if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_height -  Measures the height of a binary tree.
 *
 * @tree: Tree to measure.
 *
 * Return: The height of the tree. 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height1 = 0, height2 = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	height1 = binary_tree_height(tree->left);
	height2 = binary_tree_height(tree->right);

	return (1 + (height1 > height2 ? height1 : height2));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 * Return: 1 if perfect, 0 otherwise or if tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	return (size == (size_t)((1 << (height + 1)) - 1));
}
