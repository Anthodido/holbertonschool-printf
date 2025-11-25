#include "main.h"
/**
* _putchar - Écrit un caractere variable c.
* @c: Le caractère à imprimer.
*
* Return: 1 si succès, -1 si erreur.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}