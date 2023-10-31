#include "binary_trees.h"

/**
 * binary_tree_node - This function created a root node for a binary tree
 *
 * @parent: the parebt node
 * @value: the value to store af tge node
 *
 * Return: the created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (root == NULL)
		return (NULL);

	root->parent = parent;
	root->n = value;
	root->left = NULL;
	root->right = NULL;

	return (root);
}
