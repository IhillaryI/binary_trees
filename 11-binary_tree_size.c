#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to
 * measure the size
 *
 * Description: If tree is NULL, the function must return 0
 *
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s, l, r;

	if (tree == NULL)
		return (0);
	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);

	s = l + r;
	return (s + 1);
}
