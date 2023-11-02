#include "binary_trees.h"

/**
 * binary_trees_ancestor - checks for lowest common ancestor
 * @first: First node
 * @second: Second node
 * Return: the node of the ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	       const binary_tree_t *second)
{
	binary_tree_t *p_first, *p_sec;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	p_first = first->parent;
	p_sec = second->parent;

	if (p_first == NULL || first == p_sec || (!p_first->parent && p_sec))
		return (binary_trees_ancestor(first, p_sec));
	else if (p_sec == NULL || second == p_first || (!p_sec->parent && p_first))
		return (binary_trees_ancestor(p_first, second));
	return (binary_trees_ancestor(p_first, p_sec));
}
