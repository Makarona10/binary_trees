#include "binary_trees.h"

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

    r = binary_tree_height(tree->right);
    l = binary_tree_height(tree->left);

    return (l - r);
}