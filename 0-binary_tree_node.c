#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_node - create a new binary tree node
* @parent: the parent of the new node
* @value: the value of the new node
* Return: a pointer to the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
