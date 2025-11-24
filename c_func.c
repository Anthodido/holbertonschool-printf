#include "main.h"
/**
* c_func - Fonction qui affiche un caractère passé en argument.
* @liste: Liste d'arguments contenant le caractère à imprimer.
*
* Return: Le nombre de caractères imprimés (toujours 1).
*/
int c_func(va_list liste)
{
	char c;

	c = va_arg(liste, int);

	_putchar(c);

	return(1);
}
