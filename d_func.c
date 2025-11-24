#include "main.h"
/**
 * d_func - Affiche un entier signé (%d et %i).
 * @liste: Liste des arguments variadiques contenant l'entier à afficher.
 *
 * Cette fonction récupère un entier, gère les valeurs négatives,
 * convertit le nombre en caractères un par un, puis les affiche
 * via _putchar. Les chiffres sont stockés temporairement dans un buffer
 * afin d'être réaffichés dans le bon ordre.
 *
 * Return: Le nombre total de caractères imprimés.
 */
int d_func(va_list liste)
{
	int n, count = 0;
	unsigned int num;
	char buffer[11];
	int ind = 0;
	unsigned int digit;
	
	n = va_arg(liste, int);
	if (n == 0)
	{
		_putchar ('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar ('-');
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	while (num > 0)
	{
		digit = num % 10;
		buffer[ind] = '0' + digit;
		ind++;
		num = num / 10;
	}

	while (ind > 0)
	{
		ind--;
		_putchar (buffer[ind]);
		count++;
	}

	return (count);
}
