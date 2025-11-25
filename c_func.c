#include "main.h"
/**
* c_func - Fonction qui affiche un caractère.
* @liste: Liste d'arguments variadiques contenant le caractère à imprimer.
*
* Cette fonction récupère un caractère via va_arg
* puis l'affiche avec _putchar.
*
* Return: Le nombre de caractères imprimés (toujours 1).
*/
int c_func(va_list liste)
{
	char c;

	c = va_arg(liste, int);

	_putchar(c);

	return (1);
}
