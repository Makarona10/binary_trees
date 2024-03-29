#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: Pointer to the node to insert the left-child in
 *
 * @value: The value to put in the new node
 *
 * Return: A pointer to the new node or NULL if it failed
*/

void binary_tree_delete(binary_tree_t *tree)
{
    if (!tree)
        return;
    
    if (tree->left)
        binary_tree_delete(tree->left);
    
    if (tree->right)
        binary_tree_delete(tree->right);
    
    free(tree);
}