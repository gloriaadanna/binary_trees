#include "binary_trees.h"

/**
 * binary_tree_inorder - This program Goes through a binary tree
 * using in-order traversal.
 * @tree: A pointer to the root node of the tree
 * @func: A pointer to a function
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		binary_tree_inorder(tree->right);
		func(tree->data);
		binary_tree_inorder(tree->left);
	}
}
