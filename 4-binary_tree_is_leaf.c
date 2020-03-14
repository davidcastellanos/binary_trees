#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: Pointer to node to check
 * Return: If node, result is1 or 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}
