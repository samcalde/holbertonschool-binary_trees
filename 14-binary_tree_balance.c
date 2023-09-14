#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftchild, rightchild;

	if (tree != NULL)
	{
		leftchild = binary_tree_height(tree->left);
		rightchild = binary_tree_height(tree->right);

		if (tree->left == NULL && tree->right == NULL)
			return (1);
		else if (rightchild > leftchild)
			return (rightchild + 1);
		else
			return (leftchild + 1);
	}
	else
		return (0);
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node
 *
 * Return: count of leaves on the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t leftchild, rightchild;

	if (tree != NULL)
	{
		leftchild = binary_tree_height(tree->left);
		rightchild = binary_tree_height(tree->right);

		return (leftchild - rightchild);
	}
	else
		return (0);
}
