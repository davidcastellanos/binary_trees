#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts
 * the nodes with at least 1 child in a binary tree
 * @tree: Pointer to root node
 * Return: Returns the count of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	if (tree->left)
		return (1 + binary_tree_nodes(tree->left));
	else if (tree->right)
		return (1 + binary_tree_nodes(tree->right));
	return (0);
}
