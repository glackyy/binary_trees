#include "binary_trees.h"

/**
 * binary_tree_inorder - Entry Function
 * @func: Pointer
 * @tree: Pointer
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
	binary_tree_inorder(tree->left, func);
	free(tree->n);
	binary_tree_inorder(tree->right, func);
}
}
