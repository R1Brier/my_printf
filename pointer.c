/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** 
*/

#include "include/my.h"

void	pointer(long int i, int *flag)
{
	char *str;
	char *nb = "abcdef";
	int j = 0;
	int z = 0;

	str = malloc( z * sizeof(char) + 1);
	while (i != 0) {
		if (i % 16 >= 10) {
			while (j + 10 != i % 16)
				j++;
			str[z] = nb[j];
			j = 0;
		}
		else
			str[z] = i % 16 + 48;
		z++;
		i = i / 16;
	}
	addhex(str, z, flag);
}

void	addhex(char *str, int z, int *flag)
{
	int n = 0;

	
	str[z] = 'x';
	z++;
	str[z] = '0';
	z++;
	str[z] = 0;

	while (flag[4] > my_strlen(str) && flag[1] == -1 &&
	       n < flag[4] - my_strlen(str)) {
		my_putchar(32 + flag[3]);
		n++;
			}
	my_revstr(str);
	my_putstr(str);
	while (flag[4] > my_strlen(str) && flag[1] == 1 &&
	       n < flag[4] - my_strlen(str)) {
		my_putchar(32 + flag[3]);
		n++;
	}
}

void	flag_c(va_list ap, int *flag)
{
	my_putchar_flag(va_arg(ap, int), flag);
}

int	get_nb_cipher(int j, int base)
{
	int i = 0;

	while (j / base != 0) {
		i++;
		j = j / 10;
	}
	return (i + 1);
}

void	my_putchar_flag(char c, int *flag)
{
	int i = 0;
	int n = 0;

	if (flag[4] > 1 && flag[1] == 1) {
		my_putchar(c);
		while (n < flag[4]) {
			my_putchar(32 + flag[3]);
			n++;
		}
	}
	else if (flag[4] > 1 && flag[1] == 1) {
		while (n < flag[4]) {
			my_putchar(32 + flag[3]);
			n++;
		}
		my_putchar(c);
	}
	else
		my_putchar(c);
}
