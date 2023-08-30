#include "binary_trees.h"

/**
 * binary_tree_nodes - Entry Function
 * @tree: Pointer
 * Return: ns (SUCCESS)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t ns = 0;

if (tree)
{
ns += (tree->left || tree->right) ? 1 : 0;
ns += binary_tree_nodes(tree->left);
ns += binary_tree_nodes(tree->right);
}
return (ns);
}
