#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: The parent of the node
 * @value: The key i.e value that the node contains
 * Description: Creates a binary tree node, which
 * consists of a pointer to the parent of the node, a pointer to
 * the left child of the node if any, a pointer to the right child
 * of the node if any and the value the node contains
 *
 * Return: a pointer to binary_tree_t type
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *Node;

	Node = malloc(sizeof(binary_tree_t));
	if (Node == NULL)
		return (Node);
	Node->n = value;
	Node->parent = parent;
	Node->left = NULL;
	Node->right = NULL;
	return (Node);
}
