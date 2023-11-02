#include "binary_trees.h"

/**
 * binary_tree_leaves - calculates leaves of tree
 * @tree: point to tree
 *
 * Return: leaves of tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0, size_r = 0, size_l = 0;

	if (tree == NULL)
		return (0);
	size_l = binary_tree_leaves(tree->left);
	size_r = binary_tree_leaves(tree->right);
	size = size_l + size_r;
	return ((!size_l && !size_r) ? size + 1 : size + 0);
}
