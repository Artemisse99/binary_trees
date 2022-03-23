#include "binary_trees.h"

/**
* binary_tree_is_leaf - creates a binary tree node.
* @tree: pointer to the parent node of the node to create.
* @func: pointer to the parent node of the node to create.
* Return: pointer to the new node, or NULL on failure.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    
    if (!tree || !func)
        return;
    
    /* then recur on left subtree */
    binary_tree_inorder(tree->left, func);
    func(tree->n);
    /* now recur on right subtree */
    binary_tree_inorder(tree->right, func);
}