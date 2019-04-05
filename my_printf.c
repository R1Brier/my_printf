/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** 
*/
#include "include/my.h"

void	putprint(char const *str, int *flag)
{
	int i = 0;

	while(str[i] != '\0') {
		if (str[i] < 32 || str[i] >= 127)
			put_unprintable(str[i], flag);
		else
			my_putchar(str[i]);
		i++;
	}
}

void	put_unprintable(char c, int *flag)
{
	my_putchar('\\');
	if (c < 32)
		my_putchar('0');
	if (c < 8)
		my_putchar('0');
	print_octal(c, flag);
}

void	my_tab(va_list ap, int *flag)
{
	void (*fp[12])(va_list, int *);

	fp[0] = &flag_c;
	fp[1] = &flag_s;
	fp[2] = &flag_i;
	fp[3] = &flag_i;
	fp[4] = &flag_b;
	fp[5] = &flag_o;
	fp[6] = &flag_u;
	fp[7] = &flag_x_maj;
	fp[8] = &flag_x;
	fp[9] = &flag_s_maj;
	fp[10] = &flag_p;
	fp[11] = &flag_percent;
	if (flag[0] != -1)
		fp[flag[0]](ap, flag);
}

int	*restart_flag(int *flag)
{
	flag[0] = -1;
	flag[1] = -1;
	flag[2] = -1;
	flag[3] = -1;
	flag[4] = -1;
	return (flag);
}

void	my_printf(char const *frm, ...)
{
	int i = 0;
	int *flag = init();
	va_list ap;
	int a = 0;

	va_start(ap, frm);
	while (frm[i] != '\0') {
		if (frm[i] == '%') {
			if (check(frm[i + 1], flag) == 0)
				i = i + check_flag(frm, i, flag);
			else
				i = i + 2;
			my_tab(ap, flag);
		}
		else if (flag[0] < 0) {
			my_putchar(frm[i]);
			i++;
		}
		flag = init();
	}
	va_end(ap);
}
