#include "binary_trees.h"

/**
* binary_tree_is_leaf - creates a binary tree node.
* @node: pointer to the parent node of the node to create.
* Return: pointer to the new node, or NULL on failure.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
    if(node->left!=NULL && node->right!=NULL) return 1;
        else return 0;
}