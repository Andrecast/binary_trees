#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		return (1);
	return (0);
}

/**
 * binary_tree_height - function that goes through a binary
 * tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * Return: size
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t node_left = 0, node_right = 0;

	if (!tree  || (!tree->left && !tree->right))
		return (0);


	node_left = binary_tree_height(tree->left);
	node_right = binary_tree_height(tree->right);

	if (node_left > node_right)
	{
		return (node_left + 1);
	}

	return (node_right + 1);
}
