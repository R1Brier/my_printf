/*
** EPITECH PROJECT, 2017
** flag1.c
** File description:
** 
*/
#include "include/my.h"

void	percent(void)
{
	my_putchar('%');
}

void	print_hexa(unsigned int i, int *flag)
{
	char *str;
	char *map = "abcdef";
	int j = 0;
	int z = 0;

	str = malloc((get_nb_cipher(i, 16) + 2) * sizeof(char));
	while (i != 0) {
		if (i % 16 >= 10) {
			while (j + 10 != i % 16)
				j++;
			str[z] = map[j];
			j = 0;
		}
		else
			str[z] = i % 16 + 48;
		z++;
		i = i / 16;
	}
	aff_nb(str, z, flag);
}

void	print_hexa_maj(unsigned int i, int *flag)
{
	char *str;
	char *map = "ABCDEF";
	int j = 0;
	int z = 0;

	str = malloc((get_nb_cipher(i, 16) + 2) * sizeof(char));
	while (i != 0) {
		if (i % 16 >= 10) {
			while (j + 10 != i % 16)
				j++;
			str[z] = map[j];
			j = 0;
		}
		else
			str[z] = i % 16 + 48;
		z++;
		i = i / 16;
	}
	aff_nb(str, z, flag);
}

void	print_bin(unsigned int i, int *flag)
{
	char *str;
	int j = 0;

	str = malloc((get_nb_cipher(i, 2)) * sizeof(char));
	while (i != 0) {
		str[j] = i % 2 + 48;
		j++;
		i = i / 2;
	}
	aff_nb(str, j, flag);
}

void	print_octal(unsigned int i, int *flag)
{
	char *str;
	int j = 0;

	str = malloc((get_nb_cipher(i, 8)) * sizeof(char));
	while (i != 0) {
		str[j] = i % 8 + 48;
		j++;
		i = i / 8;
	}
	aff_nb(str, j, flag);
}
