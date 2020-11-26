#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to node.
 * Return: height of tree or 0 .
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left < right)
	{
		return (right + 1);
	}
	return (left + 1);
}
