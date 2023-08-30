#include "binary_trees.h"

/**
 * binary_tree_balance - Entry Function
 * @tree: Pointer
 * Return: balance or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
return (0);
}

/**
 * binary_tree_height - Entry Function
 * @tree: Pointer
 * Return: 0 (SUCCESS)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
	size_t lt = 0, rt = 0;

	lt = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	rt = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	return ((lt > rt) ? lt : rt);
}
return (0);
}
