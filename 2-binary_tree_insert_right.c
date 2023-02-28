#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child
 * of another node
 *
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 *
 * Description: If parent already has a right-child, the new node must take
 * its place and the old right-child must be set as the right-child of the
 * new node
 *
 * Return: a pointer to the created node or NULL on failure or if
 * parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *Node, *tmp;

	if (parent == NULL)
		return (NULL);
	Node = binary_tree_node(parent, value);
	if (Node == NULL)
		return (Node);
	if (parent->right == NULL)
		parent->right = Node;
	else
	{
		tmp = parent->right;
		tmp->parent = Node;
		Node->right = tmp;
		parent->right = Node;
	}
	return (Node);
}
