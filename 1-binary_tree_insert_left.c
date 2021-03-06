#include "binary_trees.h"

/**
* binary_tree_insert_left - creates a binary tree node insert left.
* @parent: pointer to the parent node of the node to create.
* @value: value to store in the new node.
* Return: pointer to the new node, or NULL on failure.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

binary_tree_t *child_left;
binary_tree_t *tmp;

if (parent == NULL)
return (NULL);

child_left = malloc(sizeof(binary_tree_t));
if (child_left == NULL)
return (NULL);

child_left->left = NULL;
child_left->right = NULL;
child_left->n = value;
child_left->parent = parent;

if (parent->left == NULL)
parent->left = child_left;

else
{
tmp = parent->left;
parent->left = child_left;
child_left->left = tmp;
tmp->left = NULL;
tmp->right = NULL;
tmp->parent = child_left;

}
return (child_left);
}
