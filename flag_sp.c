/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** 
*/
#include "include/my.h"
 
void	flag_x_maj(va_list ap, int *flag)
{
	print_hexa_maj(va_arg(ap, unsigned int), flag);
}

void	flag_x(va_list ap, int *flag)
{
	print_hexa(va_arg(ap, unsigned int), flag);
}

void	flag_percent(va_list ap, int *flag)
{
	percent();
}

void	flag_s_maj(va_list ap, int *flag)
{
	putprint(va_arg(ap, char *), flag);
}

void	flag_p(va_list ap, int *flag)
{
	pointer(va_arg(ap, long int), flag);
}

