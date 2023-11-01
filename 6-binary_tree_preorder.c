#include "binary_trees.h"


/**
 * binary_tree_preorder - Traverses a tree in preorder mode
 * @root: Root of tree
 * @func: Print function
 */
void binary_tree_preorder(const binary_tree_t *root, void (*func)(int))
{
	if (root != NULL)
	{
		func(root->n);
		binary_tree_preorder(root->left, func);
		binary_tree_preorder(root->right, func);
	}
}
