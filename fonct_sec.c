/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** 
*/
#include "include/my.h"

void	my_put_unsint(unsigned int nb, int *flag)
{
	int n = 0;

	if (nb < 10) {
		my_putchar(nb + 48);
	}
	else if (nb > 9) {
		my_put_nbr(nb / 10, flag);
		n = nb % 10;
		my_putchar(n + 48);
	}
}

void	my_put_nbr(int nb, int *flag)
{
	int n = 0;
	if (flag[2] == 1 && nb > 0)
		my_putchar('+');
	if (nb < 0) {
		my_putchar('-');
		nb = -nb;
	}
	if (nb < 10) {
		my_putchar(nb + 48);
	}
	else if (nb > 9) {
		flag[2] = 0;
		my_put_nbr(nb / 10, flag);
		n = nb % 10;
		my_putchar(n + 48);
	}
}

void	aff_nb(char *str, int pos, int *flag)
{
	int n = 0;
	
	if (flag[5] == 1)
		addhex(str, pos, flag);
	else {
		while (flag[4] > my_strlen(str) &&
		       n <  flag[4] - my_strlen(str) &&
		       flag[1] == -1) {
			my_putchar(32 + flag[3]);
			n++;
		}
		str[pos] = 0;
		my_revstr(str);
		my_putstr(str);
		while (flag[4] > my_strlen(str) &&
		       n < flag[4] - my_strlen(str)
		       && flag[1] == 1) {
			my_putchar(32 + flag[3]);
			n++;
		}
	}
}

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putstr(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
}
