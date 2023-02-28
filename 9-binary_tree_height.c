#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Description: If tree is NULL, your function must return 0
 *
 * Return: the height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	static size_t l_subtree_h, r_subtree_h;

	if (tree == NULL)
		return (0);
}
