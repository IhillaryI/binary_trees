#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a
 * binary tree
 *
 * @tree: is a pointer to the node to measure the depth
 *
 * Description: If tree is NULL, return 0
 *
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count;
	binary_tree_t *tmp;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	tmp = tree->parent;
	count = 1;

	while (tmp->parent != NULL)
	{
		count += 1;
		tmp = tmp->parent;
	}
	return (count);
}
