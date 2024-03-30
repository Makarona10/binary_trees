#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, your function must return 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t l, r;

	if (!tree && !tree->left && !tree->right)
		return (0);

    l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	
    if (l >= r)
		return (1 + l);

	return (1 + r);
}
