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

	if (!tree)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (l >= r)
		return (1 + l);

	return (1 + r);
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *r, *l;

	if (!tree)
		return (0);

	r = tree->right;
	l = tree->left;

	if (tree && !tree->left && !tree->right)
		return (1);

	if (!r || !l)
		return (0);

	if (binary_tree_height(l) == binary_tree_height(r))
	{
		if (binary_tree_is_perfect(r) && binary_tree_is_perfect(l))
			return (1);
	}
	return (0);
}
