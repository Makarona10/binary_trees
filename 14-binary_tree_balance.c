#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, your function must return 0
*/

size_t binary_tree_heightt(const binary_tree_t *tree)
{
    size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left >= right)
		return (1 + left);
	return (1 + right);

}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, your function must return 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int r, l;

	if (!tree)
		return (0);

	r = binary_tree_heightt(tree->right);
	l = binary_tree_heightt(tree->left);

	return (l - r);
}
