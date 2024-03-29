#include "binary_trees.h"

int main ()
{
    binary_tree_t *root;
    root = binary_tree_node(NULL, 5);
    binary_tree_insert_left(root, 9);
    binary_tree_insert_right(root, 8);
    printf("%d  %d  %d\n", root->left->n, root->n, root->right->n);
    binary_tree_delete(root);
    printf("%d  %d  %d\n", root->left->n, root->n, root->right->n);
}