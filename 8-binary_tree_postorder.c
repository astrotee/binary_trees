#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_postorder - traverese the tree in postorder
* @tree: the root of the tree
* @func: a function pointer to call the nodes with
* Return: Nothing
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
