#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_nodes - get the number of inner nodes in a binary tree
* @tree: the tree
* Return: the number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (++nodes);
}
