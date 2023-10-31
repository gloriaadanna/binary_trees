#include "binary_trees.h"

/**
 * binary_tree_sibling - this checks if a node has a sibiling
 *
 * @node: the node yo check fr its sibiling
 *
 * Return: the sibiling node or null if not
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
	{
		if (node->parent->right == NULL)
			return (NULL);
		return (node->parent->right);
	}
	else
	{
		if (node->parent->left == NULL)
			return (NULL);
		return (node->parent->left);
	}

	return (NULL);
}
