#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a
 * node as the right-child of another node
 * @parent: ptr to the parent node
 * @value: value
 * Return: New node Pointer or NULL on failure and NULL parent
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nuevo_nodo = '\0';

	if (!parent)
		return ('\0');
	nuevo_nodo = binary_tree_node(parent, value);
	if (!nuevo_nodo)
		return ('\0');
	if (parent->right)
	{
		parent->right->parent = nuevo_nodo;
		nuevo_nodo->right = parent->right;
	}
	parent->right = nuevo_nodo;
	return (nuevo_nodo);
}
