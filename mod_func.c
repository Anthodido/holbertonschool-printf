#include "main.h"
/**
 * mod_func - Fonction qui affiche le caractère '%'.
 * @liste: Liste d'arguments variable (non utilisée ici).
 *
 * Return: Le nombre de caractères imprimés (toujours 1).
 */
int mod_func(va_list liste)
{
	_putchar ('%');
	return (1);
}
