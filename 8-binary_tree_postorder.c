#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through a binary
 * tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: funtions to print the value
 * Return - nothing
 **/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		binary_tree_inorder(tree->right, func);
		func(tree->n);
	}
}
