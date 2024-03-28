#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_is_root - check if a node is a root
* @node: the node to check
* Return: 1 if it's a root 0 otherwise
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
