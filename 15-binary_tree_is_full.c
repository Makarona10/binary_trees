#include "binary_trees.h"

/**
 * binary_tree_sizee - measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, your function must return 0
*/

size_t binary_tree_sizee(const binary_tree_t *tree)
{
	size_t x, y;

	if (!tree)
		return (0);

	x = binary_tree_sizee(tree->left);
	y = binary_tree_sizee(tree->right);
	return (x + y + 1);
}


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

    r = binary_tree_sizee(tree->right);
    l = binary_tree_sizee(tree->left);

    if (l == r)
        return (1);
    else
        return (0);
}