#include "binary_trees.h"

/**
 * binary_tree_delete - binary tree delete
 * @tree: pointer to tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *aux;

	if (tree == NULL)
		return;

	aux = tree;

	while (tree)
	{
		if (aux->left)
			aux = aux->left;
		else
		{
			if (aux->right)
				aux = aux->right;
			else
			{
				if (aux->parent && (aux->n < aux->parent->n))
					aux->parent->left = NULL;
				else if (aux->parent && aux->n > aux->parent->n)
					aux->parent->right = NULL;
				if (aux == tree)
					break;
				free(aux);
				aux = tree;
			}
		}
	}
	free(tree);
}
