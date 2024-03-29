#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_is_full - check if a binary tree is full
* @tree: the root of the tree
* Return: 1 if it's full 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	static int isroot = 1;
	size_t lh = 0, rh = 0;

	if (tree == NULL)
	{
		if (isroot)
			return (0);
		return (1);
	}
	isroot = 0;
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		lh = binary_tree_is_full(tree->left);
		rh = binary_tree_is_full(tree->right);
		return (lh && rh);
	}
	return (0);
}
