#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a
 * binary tree is full
 * @tree: Pointer to root node
 * Return: tree is full? 1, or 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	if (!tree->left && !tree->right)
		return (1);
	return (0);
}
