#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: Pointer to node to find uncle node
 * Return: Pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return ('\0');
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
