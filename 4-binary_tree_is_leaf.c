#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if node is leaf
 * @node: pointer to node
 *
 * Return: 1 if leaf node else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == 0)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return(0);
}
