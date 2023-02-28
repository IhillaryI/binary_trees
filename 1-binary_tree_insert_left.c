#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the lef-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: a pointer to the created node or NULL, if parent is NULL: NULL
 * Description: If parent already has a left-child, the new node must
 * take its place and the old left-child must be set as the left-child of the
 * new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *Node;
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);
	Node = binary_tree_node(parent, value);
	if (Node == NULL)
		return (Node);
	if (parent->left == NULL)
		parent->left = Node;
	else
	{
		tmp = parent->left;
		tmp->parent = Node;
		Node->left = tmp;
		parent->left = Node;
	}
	return (Node);
}
