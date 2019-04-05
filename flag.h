/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** 
*/
#ifndef _FLAG_H_
#define _FLAG_H_

void	flag_c(va_list ap, int *flag);

void    flag_s(va_list ap, int *flag);

void	print_spaces(int k, int *flag);

void    flag_i(va_list ap, int *flag);

void    flag_b(va_list ap, int *flag);

void    flag_o(va_list ap, int *flag);

void    flag_u(va_list ap, int *flag);

void    flag_x_maj(va_list ap, int *flag);

void    flag_x(va_list ap, int *flag);

void    flag_percent(va_list ap, int *flag);

void    flag_s_maj(va_list ap, int *flag);

void    flag_p(va_list ap, int *flag);

void	my_put_nbr_flag(int nb, int *flag);

void	invert_space(int *flag, int nb, int k);

void	my_putstr_flag(char const *str, int *flag);

void	invert_str(char const *str, int *flag);

#endif
