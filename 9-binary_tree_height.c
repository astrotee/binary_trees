#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_height - get the height of the tree
* @tree: the root of the tree
* Return: the height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t mxheight = 0, lh = 0, rh = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	mxheight =  (lh > rh) ? lh : rh;

	return (++mxheight);
}
