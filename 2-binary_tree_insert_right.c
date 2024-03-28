#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_insert_right - insert a new node as the right-child of
* another node
* @parent: the parent of the new node
* @value: the value of the new node
* Return: a pointer to the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}

	parent->right = new;

	return (new);
}
