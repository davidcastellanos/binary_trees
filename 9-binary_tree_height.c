#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the
 * height of a binary tree
 * @tree: Pointer to root node
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left >= right)
		return (1 + left);
	return (1 + right);
}
