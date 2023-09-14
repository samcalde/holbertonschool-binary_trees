#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node
 *
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count;

	if (tree != NULL)
	{
		count = binary_tree_depth(tree->parent);

		if (tree->parent == NULL)
			return (0);
		else
			return (count + 1);
	}
	else
		return (0);
}
