#include "binary_trees.h"

/**
 * binary_tree_depth - calculates depth of tree
 * @tree: point to tree
 *
 * Return: depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
