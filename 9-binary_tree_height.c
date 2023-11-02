#include "binary_trees.h"

/**
 * binary_tree_height - calculates height of tree
 * @tree: point to tree
 *
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side = 0;
	size_t right_side = 0;

	if (tree == NULL)
		return (0);
	left_side = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_side = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((left_side > right_side) ? left_side : right_side);
}
