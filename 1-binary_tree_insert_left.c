#include "binary_trees.h"

/**
 * binary_tree_insert_left - tgis function inserts anode to te left of a parent
 *
 * @parent: the parent node
 * @value: tge data to store in the node
 *
 * Return: the poibter to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	binary_tree_t *temp;

	if (leftnode == NULL || parent == NULL)
	{
		free(leftnode);
		return (NULL);
	}

	leftnode->parent = NULL;
	leftnode->n = value;
	leftnode->left = NULL;
	leftnode->right = NULL;

	if (parent->left == NULL)
	{
		leftnode->parent = parent;
		parent->left = leftnode;
	}
	else
	{
		temp = parent->left;

		parent->left = leftnode;
		leftnode->parent = parent;
		temp->parent = leftnode;
		leftnode->left = temp;
	}

	return (leftnode);
}
