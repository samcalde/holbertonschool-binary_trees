#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node
 *
 * Return: 1 if it is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t leftchild, rightchild;

	if (tree != NULL)
	{
		leftchild = binary_tree_is_full(tree->left);
		rightchild = binary_tree_is_full(tree->right);

		if (tree->left == NULL && tree->right == NULL)
			return (1);
		else if (leftchild == 1 && rightchild == 1)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
