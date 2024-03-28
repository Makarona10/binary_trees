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

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *node;
    
    if (!parent)
        return (NULL);

    node = binary_tree_node(parent, value);
    if (!node)
        return (NULL);

    parent->left = node;
    node->parent = parent;
    if (node->left)
        node->left->parent = node;
    return (node);
}