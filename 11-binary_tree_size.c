#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node
 *
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftchild, rightchild;

	if (tree != NULL)
	{
		leftchild = binary_tree_size(tree->left);
		rightchild = binary_tree_size(tree->right);

		return (rightchild + leftchild + 1);
	}
	else
		return (0);
}
