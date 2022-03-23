#include "binary_trees.h"

/**
* _deleteTree - delete tree.
* @tree: pointer to the tree.
* Return: pointer to the new node, or NULL on failure.
*/
void _deleteTree(binary_tree_t *tree)
{
    if (tree == NULL) return;
 
    /* first delete both subtrees */
    _deleteTree(tree->left);
    _deleteTree(tree->right);
 
    /* then delete the node */
    free(tree);
}
/**
* binary_tree_delete - delete tree.
* @tree: pointer to the tree.
* Return: pointer to the new node, or NULL on failure.
*/
void binary_tree_delete(binary_tree_t *tree)
{
   _deleteTree(tree);
  tree = NULL;
}