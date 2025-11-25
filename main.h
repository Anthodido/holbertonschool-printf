#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
* struct format_func - Associe un spécificateur de format à une fonction.
* @specifier: Caractère représentant le type (ex : 'c', 's', '%').
* @func: Pointeur vers la fonction qui gère ce spécificateur.
*
* Cette structure permet de faire correspondre chaque spécificateur du
* printf personnalisé à la fonction qui doit traiter l'argument associé.
*/
typedef struct format_func
{
    char specifier;
    int (*func)(va_list);
} format_func_t;

int _putchar(char c);
int _printf(const char *format, ...);
int c_func(va_list liste);
int s_func(va_list liste);
int mod_func(va_list liste);
int d_func(va_list liste);
int b_func(va_list liste);
int u_func(va_list liste);

#endif