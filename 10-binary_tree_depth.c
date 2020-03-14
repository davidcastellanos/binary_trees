#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the
 * depth of a node in a binary tree
 * @tree: Pointer to node to measure
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	for (; tree && tree->parent; tree = tree->parent, depth++)
		;
	return (depth);
}
