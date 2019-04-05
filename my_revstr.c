/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** 
*/
#include "include/my.h"

char	*my_revstr(char *str)
{
	int first_char = 0;
	int last_char = my_strlen(str) - 1;
	char stockage;

	while(first_char < last_char) {
		stockage  = str[first_char];
		str[first_char] = str[last_char];
		str[last_char] = stockage;
		first_char++;
		last_char--;
	}
	return(str);
}
