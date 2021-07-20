#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is null or the measures the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0;
	size_t h1, h2;

	h1 = binary_tree_height_2(tree->left);
	h2 = binary_tree_height_2(tree->right);

	balance_factor = h1 - h2;

	return (balance_factor);
}

/**
 * binary_tree_height_2 - function that goes through a binary
 * tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * Return: size
 **/
size_t binary_tree_height_2(const binary_tree_t *tree)
{
	size_t node_left = 0, node_right = 0;

	if (!tree)
		return (0);

	node_left = binary_tree_height_2(tree->left);
	node_right = binary_tree_height_2(tree->right);

	if (node_left > node_right)
	{
		return (node_left + 1);
	}

	return (node_right + 1);
}
