#include "binary_trees.h"

/**
* binary_tree_is_leaf - creates a binary tree node.
* @tree: pointer to the parent node of the node to create.
* Return: pointer to the new node, or NULL on failure.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
    
     size_t h_left, h_right;

        if (tree == NULL || (tree->left == NULL && tree->right == NULL))
                return (0);
        h_left = binary_tree_height(tree->left);
        h_right = binary_tree_height(tree->right);
        if (h_right <= h_left)
                return (h_left + 1);

        return (h_right + 1);
}