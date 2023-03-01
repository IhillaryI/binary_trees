#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * in a binary tree
 *
 * @tree: is a pointer to the root node of the tree to count
 * the number of nodes
 *
 * Description: If tree is NULL, return 0
 * Return: The nodes count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nc;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		nc = 1;
	else
		nc = 0;
	nc += binary_tree_nodes(tree->left);
	nc += binary_tree_nodes(tree->right);

	return (nc);
}
