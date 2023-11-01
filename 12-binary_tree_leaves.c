#include "binary_trees.h"

/**
 * binary_tree_leaves - Count binary tree leaves
 * @tree: Root of binary tree
 * Return: Number of leaves in binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = binary_tree_leaves(tree->left);
		r = binary_tree_leaves(tree->right);
		return (l + r);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	return (0);

}
