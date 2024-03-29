#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, your function must return 0
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t x, y;

    if (!tree)
        return (0);
	x = binary_tree_size(tree->left);
    y = binary_tree_size(tree->right);
    return (x + y + 1);
}