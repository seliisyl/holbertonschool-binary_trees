#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insrt un nv node tt qu'enfant droit d'1 nv node
 * @parent: pointer vs le node ds lequel insrt l'enfant droit
 * @value: pointer vs le node crÃÃ, ou NULL si echec ou si parent est NULL
 *
 * Return: pointer vs le node crÃe, ou NULL si echec ou si parent est NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* verifie si parent est NULL */
	if (parent == NULL)
		return (NULL);

	/* cree un nv node avc la valeur specifiÃ©*/
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* si parent a deja un enft droit remplacez avc nv node */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	/* mettre nv node comme enft droit du parent */
	parent->right = new_node;
	return (new_node);
}
