/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** 
*/
#include "include/my.h"

void	my_put_nbr_flag(int nb, int *flag)
{
	int k = get_nb_cipher(nb, 10);
	int n = 0;

	if (flag[2] == 1)
		k = k + 1;
	if (flag[4] <= k)
		my_put_nbr(nb, flag);
	else if (flag[1] == 1 && flag[4] > k)
		invert_space(flag, nb, k);
	else {
		print_spaces(k, flag);
		my_put_nbr(nb, flag);
	}
}
void	print_spaces(int k, int *flag)
{
	int n = 0;

	while (n < flag[4] - k) {
		my_putchar(32 + flag[3]);
		n++;
	}
}

void	invert_space(int *flag, int nb, int k)
{
	int n = 0;

	my_put_nbr(nb, flag);
	if (flag[4] > k) {
		while (n < flag[4] - k) {
			my_putchar(32 + flag[3]);
			n++;
		}
	}
}

void	my_putstr_flag(char const *str, int *flag)
{
	int n = 0;

	if (flag[1] == 1)
			invert_str(str, flag);
	else {
		while (n < flag[4] - my_strlen(str)) {
			my_putchar(32 + flag[3]);
			n++;
		}
		my_putstr(str);
	}
}

void	invert_str(char const *str, int *flag)
{
	int n = 0;
	
	my_putstr(str);
	if (flag[4] > my_strlen(str)) {
		while (n < flag[4] - my_strlen(str)) {
			my_putchar(32 + flag[3]);
			n++;
		}
	}
}
