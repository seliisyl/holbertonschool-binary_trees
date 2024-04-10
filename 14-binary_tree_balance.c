#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Calcule la hauteur d'un arbre binaire
 * @tree: pointeur vs le node racine de l'arbre
 *
 * Return: la hauteur de l'arbre, ou 0 si l'arbre est NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	return (1 + (height_left > height_right ? height_left : height_right));
			}

			/**
			 * binary_tree_balance - Calcule le facteur d'équilibre d'un arbre binair
			 * @tree: Un pointeur vers le node racine de l'arbre
			 *
			 * Return: Le facteur d'équilibre de l'arbre, ou 0 si l'arbre est NUL
			 */
			int binary_tree_balance(const binary_tree_t *tree)
			{
			if (tree == NULL)
			return (0);
			return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
					}
