#include "binary_trees.h"

/**
 * binary_tree_delete - This program Deletes a binary tree.
 * @tree: A pointer to the tree's root node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
