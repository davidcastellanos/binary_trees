#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts
 * a node as the left-child of another node
 * @parent: Pointer to parent node
 * @value: value
 * Return: New node pointer or NULL on failure or NULL parent
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nuevo_nodo = '\0';

	if (!parent)
		return ('\0');
	nuevo_nodo = binary_tree_node(parent, value);
	if (!nuevo_nodo)
		return ('\0');
	if (parent->left)
	{
		parent->left->parent = nuevo_nodo;
		nuevo_nodo->left = parent->left;
	}
	parent->left = nuevo_nodo;
	return (nuevo_nodo);
}
