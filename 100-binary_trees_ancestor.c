#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: a pointer to the first node
 *
 * @second: a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, your function must return NULL
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				const binary_tree_t *second)
{
	binary_tree_t *t;

	if (!first || !second)
		return (NULL);

	t = (binary_tree_t *)second;

	for (; first; first = first->parent)
	{
		for (; second; second = second->parent)
		{
			if (first == second)
				return ((binary_tree_t *)first);
		}
		second = t;
	}
	return (NULL);
}
