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

    node = malloc(sizeof(binary_tree_t));
    if (!node)
        return (NULL);
    parent->left = node;
    node->n = value;
    node->left = NULL;
    node->right = NULL;
    return (node);
}