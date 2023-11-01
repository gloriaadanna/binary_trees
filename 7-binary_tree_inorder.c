#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a tree in inorder mode
 * @root: Root of tree
 * @func: Print function
 */
void binary_tree_inorder(const binary_tree_t *root, void (*func)(int))
{
	if (root != NULL)
	{
		binary_tree_inorder(root->left, func);
		func(root->n);
		binary_tree_inorder(root->right, func);
	}
}
