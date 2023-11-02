#include "binary_trees.h"

/**
 * binary_tree_nodes - calculates nodes of tree
 * @tree: point to tree
 *
 * Return: nodes of tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_nodes = 0;

	if (tree == NULL)
		return (0);

	num_nodes += ((tree->left || tree->right) ? 1 : 0);
	num_nodes += binary_tree_nodes(tree->left);
	num_nodes += binary_tree_nodes(tree->right);
	return (num_nodes);
}
