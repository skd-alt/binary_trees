#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tree is full
 * @tree: point to tree
 *
 * Return: 1 if it is a full 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left && tree->right)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		if (left == 0 || right == 0)
			return (0);
		return (1);
	}
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}
