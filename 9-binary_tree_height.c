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
    size_t left, right, height;

    if (!tree)
        return -1;
    else
    {
        left = binary_tree_height (tree->left);
        right = binary_tree_height (tree->right);

        height = (left < right) ? right+1 : left+1;
        return height;
    }

}
