#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t r, l;

	if (!tree)
		return (0);
	if (tree && !tree->left && !tree->right)
		return (1);

	r = binary_tree_is_full(tree->right);
	l = binary_tree_is_full(tree->left);

	if (r == 0 || l == 0)
		return (0);
	return (1);
}
