#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: null
**/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent && node->parent->left && node->parent->right)
	{
		if (node == node->parent->left)
			return (node->parent->right);
		return (node->parent->left);
	}
	return (NULL);
}
