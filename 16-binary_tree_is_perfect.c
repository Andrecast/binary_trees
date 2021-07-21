#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (!tree)
		return (0);

	depth = binary_tree_depth_2(tree);

	return (is_perfect(tree, depth, 0));

}

/**
 * binary_tree_depth_2 - Calculate the depth
 * @tree: pointer to the root node of the tree
 * Return: depth
 **/
int binary_tree_depth_2(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}

	return (depth);
}

/**
 * is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * @depth: binary tree deepth
 * @level: level
 * Return: 1 if binary tree is perfect
 */
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (!tree->left && !tree->right)
		if (depth == level + 1)
			return (1);

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect(tree->left, depth, level + 1) && is_perfect(
		tree->right, depth, level + 1));
}
