#include "binary_trees.h"

/**
<<<<<<< HEAD
 *  * binary_tree_depth - measures the depth of a node in a binary tree.
 *   *@tree: pointer to the node to measure the depth.
 *    * Return: if tree is NULL, function must return 0.
 *    */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
					return (0);
			else
						return (1 + binary_tree_depth(tree->parent));
=======
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, your function must return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
>>>>>>> d97573703dfe27ee4bda35004d9286d61e608e16
}
