/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** 
*/

#ifndef _MY_H
#define _MY_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "flag.h"

int	check(char c, int *flag);

void	aff_nb(char *str, int pos, int *flag);

int	my_getnbr(char const *str, int i);

int	get_nb_cipher(int j, int base);

int	*init(void);

void	addhex(char *str, int z, int *flag);

void    my_putchar(char c);

void	my_putchar_flag(char c, int *flag);

void    my_putstr(char const *str);

void	my_putstr_flag(char const *str, int *flag);

void    my_put_nbr(int nb, int *flag);

void	my_put_nbr_flag(int nb, int *flag);

void    my_put_unsint(unsigned int nb, int *flag);

void    print_bin(unsigned int i, int *flag);

void    print_octal(unsigned int i, int *flag);

void    print_hexa_maj(unsigned int i, int *flag);

void    print_hexa(unsigned int i, int *flag);

void    percent(void);

void    my_printf(char const *frm, ...);

char	*my_revstr(char *str);

int     my_strlen(char const *str);

void	pointer(long int i, int *flag);

void	putprint(char const *str, int *flag);

void	put_unprintable(char c, int *flag);

int	set_flag(char const *frm, int i, int *flag, int z);

int	check_flag(char const *frm, int p, int *flag);

#endif
