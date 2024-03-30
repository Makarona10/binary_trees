#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->right)
		return (node->parent->left);
    else
        return (node->parent->right);
}