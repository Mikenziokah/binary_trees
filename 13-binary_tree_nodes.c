#include "binary_trees.h"
/**
* binary_tree_nodes - how many nodes on a tree
* @tree: root node of tree
* Return: number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t number_nd = 0;

	if (tree == NULL)
		return (0);

	else if (tree->right || tree->left)
	{
		number_nd = (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
	}
	return (number_nd);
}
