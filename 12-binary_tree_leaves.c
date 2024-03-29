#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to count leaves
 *
 * Return: If tree is NULL, your function must return 0
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t rlvs, llvs;

	if (!tree)
		return (0);

	rlvs = binary_tree_leaves(tree->left);
	llvs = binary_tree_leaves(tree->right);

	if (!tree->left && !tree->right)
		return (rlvs + llvs + 1);
	else
		return (rlvs + llvs);
}
