#include "binary_trees.h"

/**
* binary_tree_insert_right - creates a binary tree node insert right.
* @parent: pointer to the parent node of the node to create.
* @value: value to store in the new node.
* Return: pointer to the new node, or NULL on failure.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *child_right;
binary_tree_t *tmp;

if (parent == NULL)
return (NULL);

child_right = malloc(sizeof(binary_tree_t));
if (child_right == NULL)
return (NULL);

child_right->left = NULL;
child_right->right = NULL;
child_right->n = value;
child_right->parent = parent;

if (parent->right == NULL)
parent->right = child_right;

else
{
tmp = parent->right;
parent->right = child_right;
child_right->right = tmp;
tmp->left = NULL;
tmp->right = NULL;
tmp->parent = child_right;

}
return (child_right);
}
