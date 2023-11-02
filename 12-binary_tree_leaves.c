#include "binary_trees.h"

/**
 * binary_tree_leaves - This Count binary tree leaves
 * @tree: Root of binary tree
 * Return: Number of leaves in binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	l = binary_tree_leaves(tree->right);
	r = binary_tree_leaves(tree->left);
	return (r + l);

}
