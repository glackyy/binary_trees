#include "binary_trees.h"

/**
 * binary_tree_postorder - Entry Function
 * @func: Pointer
 * @tree: Pointer
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}
}
