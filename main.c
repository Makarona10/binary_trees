#include "binary_trees.h"

int main ()
{
    binary_tree_t *root = NULL;
    int x;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 56);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 256);
    x = binary_tree_is_full(root);
    printf("%d\n", x);
}