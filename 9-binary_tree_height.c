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
	size_t lh, rh;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (0);
	lh = binary_tree_height(tree->left) + 1;
	rh = binary_tree_height(tree->right) + 1;

	if (lh > rh)
		return (lh);
	else
		return (rh);
	return (lh);
}
