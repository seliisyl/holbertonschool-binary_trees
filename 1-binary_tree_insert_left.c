#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - isrt un node en tt qu'enft gauche d'un autre node
 * @parent: pointeur vs le node ds lql insrt l'enft de gauche
 * @value: valeur a stocker ds le nv node
 *
 * Return: un pointer vs le node crre, ou NULL si echec ou parent null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* verifie si le parent est null */
	if (parent == NULL)
		return (NULL);

	/* crÃe un nv node avc la valeur spe */
	new_node = binary_tree_node(parent, value);
		if (new_node == NULL)
			return (NULL);

	/* si parent a deja un enft gauche, mettre le nv node a la place */
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	/* mettre le nv node comme enft left  du parent */
	parent->left = new_node;
	return (new_node);
}
