#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a
 * given node is a root
 * @node: Pointer to node
 * Return: If root? 1, or 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
