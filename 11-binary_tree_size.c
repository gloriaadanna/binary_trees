#include "binary_trees.h"

/**
 * binary_tree_size - Get tree size
 * @tree: Root of tree
 * Return: Size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree)
	{
		l = binary_tree_size(tree->left);
		r = binary_tree_size(tree->right);
		return (l + r + 1);
	}
	return (0);
}
