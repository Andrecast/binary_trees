#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * @func: funtions to print the value
 * Return - nothing
 **/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree && !func)
		return;

	func(tree->n);

	if (tree->left)
		binary_tree_preorder(tree->left, func);

	if (tree->right)
		binary_tree_preorder(tree->right, func);

}