#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node
 *
 * Return: count of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftchild, rightchild, count;

	if (tree != NULL)
	{
		leftchild = binary_tree_nodes(tree->left);
		rightchild = binary_tree_nodes(tree->right);
		count = rightchild + leftchild;

		if (tree->left == NULL && tree->right == NULL)
			return (count);
		else
			return (count + 1);
	}
	else
		return (0);
}
