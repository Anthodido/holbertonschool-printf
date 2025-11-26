#include "main.h"
/**
* s_func - Fonction qui affiche une string.
* @liste: Liste d'arguments variadiques contenant la string à imprimer.
*
* Cette fonction récupère une chaîne de caractère via va_arg
* puis l'affiche caractère par caractère avec _putchar.
*
* Return: Nombre de caractères imprimés.
*/
int s_func(va_list liste)
{
	char *str;
	int i = 0;

	str = va_arg(liste, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i++;
	}

	return (i);
}
