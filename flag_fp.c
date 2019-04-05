/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** 
*/
#include "include/my.h"

void	flag_s(va_list ap, int *flag)
{
	my_putstr_flag(va_arg(ap, char *), flag);
}

void	flag_i(va_list ap, int *flag)
{
	my_put_nbr_flag(va_arg(ap, int), flag);
}

void	flag_b(va_list ap, int *flag)
{
	print_bin(va_arg(ap, unsigned int), flag);
}

void	flag_o(va_list ap, int *flag)
{
	print_octal(va_arg(ap, unsigned int), flag);
}

void	flag_u(va_list ap, int *flag)
{
	my_put_unsint(va_arg(ap, unsigned int), flag);
}
