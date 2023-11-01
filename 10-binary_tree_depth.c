#include "binary_trees.h"
/**
 * binary_tree_depth - funtion that measures depth of a node
 * @tree: pointer to the tree
 * Return: depth of the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || !tree->parent)
	{
		return (0);
	}
	depth = binary_tree_depth(tree->parent) + 1;
	{
		return (depth);
	}
}
