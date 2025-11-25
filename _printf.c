#include "main.h"
/**
 * _printf - Réimplémentation simplifiée de printf
 * @format: chaîne de format à analyser et à afficher
 *
 * Description: Parcourt la chaine format et affiche soit le résultat
 * des fonctions lié à (%c, %s, %%), grâce à une table de pointeurs
 * de fonction soit les caractères tels quels
 *
 * Return: le nombre de caractères affichés
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list liste;

	format_func_t table[] = {
		{'c', c_func},
		{'s', s_func},
		{'%', mod_func},
		{'d', d_func},
		{'i', d_func},
		{'b', b_func},
		{'u', u_func},
		{'\0', NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(liste, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			int j, found = 0;

			for (j = 0; table[j].specifier != '\0'; j++)
			{
				if (format[i + 1] == table[j].specifier)
				{
					count += table[j].func(liste);
					i++;
					found = 1;
					break;
				}
			}
			if (!found)
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
			_putchar (format[i]);
			count++;
		}
	}
	va_end(liste);
	return (count);
}
