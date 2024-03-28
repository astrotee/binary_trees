#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_delete - delete a binary tree
* @tree: the root of the tree
* Return: Nothing
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (tree == NULL)
		return;

	left = tree->left;
	right = tree->right;

	free(tree);

	binary_tree_delete(left);
	binary_tree_delete(right);
}
