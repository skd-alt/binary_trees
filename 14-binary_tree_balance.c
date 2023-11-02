#include "binary_trees.h"

/**
 * binary_tree_height_bal - height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height_bal(const binary_tree_t *tree)
{
	size_t sl = 0;
	size_t sr = 0;

	if (tree == NULL)
		return (0);
	sl = tree->left ? 1 + binary_tree_height_bal(tree->left) : 1;
	sr = tree->right ? 1 + binary_tree_height_bal(tree->right) : 1;
	return ((sl > sr) ? sl : sr);
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_bal(tree->left));
		right = ((int)binary_tree_height_bal(tree->right));
		total = left - right;
	}
	return (total);
}
