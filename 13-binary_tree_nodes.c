#include "binary_trees.h"

/**
 * binary_tree_nodes - function that returns the number of non leaf nodes
 *
 * @tree: the root node
 *
 * Return: the number of non leaf nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l = binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);
	return (l + r + 1);
}
