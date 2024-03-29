#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_depth - get the depth of a node
* @tree: the node to get the depth of
* Return: the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while ((tree = tree->parent))
	{
		depth++;
	}

	return (depth);
}
