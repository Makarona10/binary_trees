#include <binary_tree.h>

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: Pointer to the parent node of the node to create
 *
 * @value: The value to put in the new node
 *
 * Return: A pointer to the new node or NULL if it failed
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    node = malloc(sizeof(binary_tree_t))
    if (!node)
    {
        return (NULL);
    }
    node->parent = parent;
    node->value = value;
    node->right = NULL;
    node->left = NULL;
    
    return node;
}