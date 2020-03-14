#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: Pointer to parent of node to create
 * @value: value
 * Return: New node pointer or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nuevo_nodo = '\0';

	nuevo_nodo = malloc(sizeof(binary_tree_t));
	if (nuevo_nodo)
	{
		nuevo_nodo->n = value;
		nuevo_nodo->parent = parent;
		nuevo_nodo->left = '\0';
		nuevo_nodo->right = '\0';
	}
	return (nuevo_nodo);
}
