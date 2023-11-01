#include "binary_trees.h"

/**
 * binary_tree_insert_right - this inserts a node to the right child of a node
 *
 * @parent: the parent node
 * @value: the value to insert
 *
 * Return: the created node or null if failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	binary_tree_t *temp;

	if (rightnode == NULL || parent == NULL)
	{
		free(rightnode);
		return (NULL);
	}

	rightnode->parent = NULL;
	rightnode->n = value;
	rightnode->left = NULL;
	rightnode->right = NULL;

	if (parent->right == NULL)
	{
		rightnode->parent = parent;
		parent->right = rightnode;
	}
	else
	{
		temp = parent->right;

		parent->right = rightnode;
		rightnode->parent = parent;
		temp->parent = rightnode;
		rightnode->right = temp;
	}

	return (rightnode);
}
