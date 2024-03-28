#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: Pointer to the parent node of the node to create
 *
 * @value: The value to put in the new node
 *
 * Return: A pointer to the new node or NULL if it failed
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	node->right = parent->right;
	if (node->right)
		node->right->parent = node;
	parent->right = node;
	return (node);
}
