#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_inorder - traverese the tree in inorder
* @tree: the root of the tree
* @func: a function pointer to call the nodes with
* Return: Nothing
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
