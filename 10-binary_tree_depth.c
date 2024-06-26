#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, your function must return 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d;

	if (!tree)
		return (0);

	for (d = 0; tree->parent; tree = tree->parent, d++)
		;

	return (d);
}
