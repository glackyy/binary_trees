#include "binary_trees.h"

/**
 * binary_tree_leaves - Entry Function
 * @tree: Pointer
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leavs = 0;

if (tree)
{
leavs += (!tree->left && !tree->right) ? 1 : 0;
leavs += binary_tree_leaves(tree->left);
leavs += binary_tree_leaves(tree->right);
}
return (leavs);
}
