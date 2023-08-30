#include "binary_trees.h"

/**
 * full_recursive - Entry Function
 * @tree: Pointer
 * Return: 1 Otherwise 0
 */
int full_recursive(const binary_tree_t *tree)
{
if (tree)
{
	if ((tree->left != NULL && tree->right == NULL) ||
	    (tree->left == NULL && tree->right != NULL) ||
	    full_recursive(tree->left) == 0 ||
	    full_recursive(tree->right) == 0)
		return (0);
}
return (1);
}

/**
 * binary_tree_is_full - Entry Function
 * @tree: Pointer
 * Return: 1 Otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);
return (full_recursive(tree));
}
