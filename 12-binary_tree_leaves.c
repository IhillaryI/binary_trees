#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree t count
 * the number of leaves
 *
 * Description: If tree is NULL return 0
 *
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t s, l, r;

	if (tree == NULL)
		return (0);
	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);
	s = l + r;

	if (l == 0 && r == 0)
		s += 1;
	return (s);
}
