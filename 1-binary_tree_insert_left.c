#include "binary_trees.h"

/**
 * *binary_tree_insert_left - insert a node.
 * @parent: pointer to parent node
 * @value: value of the node
 * Return: a pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *node = NULL, *temp = NULL;

	if (!parent)
		node = binary_tree_node(parent, value);
	else
	{
		if (!parent->left)
		{
			node = binary_tree_node(parent, value);
			parent->left = node;
			node->parent = parent;
		}
		else
		{
			node = binary_tree_node(parent, value);
			temp = parent->left;
			parent->left = node;
			node->parent = parent;
			node->left = temp;
			temp->parent = node;
		}
	}
	return (node);
}
