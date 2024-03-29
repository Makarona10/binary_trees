#include "binary_trees.h"

int main ()
{
    binary_tree_t *root;
    size_t x;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    x = binary_tree_height(root);
    printf("%lu\n", x);
}