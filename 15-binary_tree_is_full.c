#include "binary_trees.h"
/**
* binary_tree_is_leaf - creates a binary tree node.
* @node: pointer to the parent node of the node to create.
* Return: pointer to the new node, or NULL on failure.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_is_full - is a pointer to the root node
 * @tree:  is a pointer to the root node of the tree to check
 * Return: pointer to the new node
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left == 0 || right == 0)
		return (0);
	return (1);
}
