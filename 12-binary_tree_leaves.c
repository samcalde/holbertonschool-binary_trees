#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node
 *
 * Return: count of leaves on the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftchild, rightchild, count;

	if (tree != NULL)
	{
		leftchild = binary_tree_leaves(tree->left);
		rightchild = binary_tree_leaves(tree->right);
		count = rightchild + leftchild;

		if (tree->left == NULL && tree->right == NULL)
			return (count + 1);
		else
			return (count);
	}
	else
		return (0);
}
