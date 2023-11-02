#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if node is root
 * @node: pointer to node
 *
 * Return: 1 if root node else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
