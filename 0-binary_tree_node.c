#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_node - cr?e un nv node pr un binary tree
 * @parent: pointeur vers le node parent du node a creer
 * @value: valeur entiere a stoker ds le nv node.
 *
 * Return: pointeur vers le nv node cree, ou NULL si echec
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* alloc de memoire pr le nv node */
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	/* verifie si l'alloc a reussi */
	if (new_node == NULL)
		return (NULL);
	/* init des valeurs du nv node */
	new_node->n = value;
	/* stokage valeur */
	new_node->parent = parent;
	/* liaisaon avec le parent */
	new_node->left = NULL;
	/* init du fils left a NULL */
	new_node->reght = NULL;
	/* init du fils right a NULL */
	return (new_node);
}

