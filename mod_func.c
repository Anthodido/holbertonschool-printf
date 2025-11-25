#include "main.h"
/**
* mod_func - Fonction qui affiche le caractère '%'.
* @liste: Liste d'arguments variadiques (non utilisée ici).
*
* Cette fonction est appelée lorsque le caractère de formatage '%%'
* est rencontré. Elle affiche simplement '%' à l'écran.
*
* Return: Nombre de caractères imprimés (toujours 1).
*/
int mod_func(va_list liste)
{
	(void)liste;
	_putchar ('%');
	return (1);
}
