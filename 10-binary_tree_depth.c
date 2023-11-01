#include "binary_trees.h"

/**
 * binary_tree_depth -This program Measures the depth of
 * a node in a binary tree.
 * @tree: A pointer to the node whose depth is being measured
 *
 * Return: If tree is NULL, return 0, otherwise return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *node;

	if (tree == NULL)
		return (0);

	node = (binary_tree_t *)tree;
	while (node->parent)
	{
		node = node->parent;
		depth++;
	}
	return (depth);
}
