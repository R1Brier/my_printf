/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** 
*/

int	check(char c, int *flag)
{
	char *str = "csidbouXxSp%-+0aefghjklmnqrtvwyz";
	int i = 0;

	while (str[i] != 0) {
		if(c == str[i] && i <= 11) {
			flag[0] = i;
			return(1);
		}
		else
			i++;
	}
	return (0);
}
