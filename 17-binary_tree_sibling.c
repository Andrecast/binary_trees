#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: null
**/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left->n == node->n)
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
