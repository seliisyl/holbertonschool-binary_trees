#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - mesure la profondeur d'un node ds un autre arbre binaire
 * @tree: un pointeur vs le node pr mesurer le profondeur
 *
 * Return: la profondeur du node, 0 s'il est NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/* si l'autre est NULL, la profondeur est 0 */
	if (tree == NULL)
		return (0);

	/* parcourt node vs la racine pr cmpte la profondeur */
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
