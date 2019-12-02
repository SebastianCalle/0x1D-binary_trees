#include "binary_trees.h"
/**
 * binary_tree_height - function that return height of a tree
 * @tree: pointer to a tree
 * return: size of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t count = 0;

	if (!tree)
		return (0);
	count = binary_tree_height(tree->left) + 1 + binary_tree_height(tree->right);
	return (count);
}
