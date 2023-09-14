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


/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 1 if it is, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t leftchild, rightchild;

	if (tree != NULL)
	{
		leftchild = binary_tree_size(tree->left);
		rightchild = binary_tree_size(tree->right);

		if (rightchild == leftchild)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
