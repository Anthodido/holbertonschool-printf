#include "main.h"
/**
 * s_func - Fonction qui affiche une string.
 * @liste: Liste d'arguments variable contenant le string.
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
		str = "(NULL)";
	}
		while (str[i] != '\0')
		{
			_putchar (str[i]);
			i++;
		}
		return (i);
}
