/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** 
*/
#include "include/my.h"

int	check_flag(char const *frm, int p, int *flag)
{
	char *str = "csidbouXxSp%-+0aefghjklmnqrtvwyz";
	int i = 0;
	int z = p + 1;

	while (flag[0] == -1 && frm[z] != '\0'){
		while (str[i] != '\0') {
			if (str[i] == frm[z] && i < 15
			    || frm[z] > 48 && frm[z] <= 57) {
				z = z + set_flag(frm, i, flag, z);
				i = 0;
			}
			else
				i++;
		}
		i = 0;
		z++;
	}
	if (flag[0] == -1)
		flag[0] = 11;
	return (z - p - 1);
}

int	*init(void)
{
	int *flag;

	flag = malloc(6 * sizeof(int));
	flag[0] = -1;
	flag[1] = -1;
	flag[2] = -1;
	flag[3] = 0;
	flag[4] = -1;
	flag[5] = -1;
	return (flag);
}

int	set_flag(char const *frm, int i, int *flag, int z)
{
	if (i < 12)
		flag[0] = i;
	if (frm[z] > 48 && frm[z] <= 57) {
		flag[4] = my_getnbr(frm, z);
		return (get_nb_cipher(flag[4], 10));
	} 
	switch (frm[z]) {
	case '-' :
		flag[1] = 1;
		break;
	case '+' :
		flag[2] = 1;
		break;
	case '0' :
		flag[3] = 16;
		break;
	case '#' :
		flag[5] = 1;
		break;
	}
	return (1);
}

int	my_getnbr(char const *str, int i)
{
	int n = 0;

	while (str[i] >= 48 && str[i] <= 57) {
		n = n + (str[i] - 48);
		if (str[i + 1] >= 48 && str[i + 1] <= 57)
			n = n * 10;
		i++;
	}
	return (n);
}
