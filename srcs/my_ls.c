/*
** EPITECH PROJECT, 2017
** my_ls.c
** File description:
** blabla
*/

#include "my.h"

static int argv_parser(char flag)
{
	int	i = 0;
	char	*str = "$lrdR";

	while (str[i] != flag && str[i] != '\0') {
		i++;
	}
	if (str[i] == '\0')
		return (0);
	else
		return (i);
}

static void my_init(int (*tabptr[4])(int argc, char **argv, int x))
{
	tabptr[0] = &base_ls;
	tabptr[1] = &hyp_l;
	tabptr[2] = &base_r;
	tabptr[3] = &base_d;
	tabptr[4] = &base_rr;
}

int arguments(int (*tabptr[4])(int argc, char **argv, int x),
	int argc, char **argv)
{
	int	i = 0;
	int	p;

	for (int j = 1; j < argc ; j++) {
		if (argv[j][i] == '-') {
			p = argv_parser(argv[j][i + 1]);
			tabptr[p](argc, argv, j);
			break;
		} else {
			mult_path(tabptr, argc, argv, j);
		}
	}
	return(0);
}

int main(int argc, char *argv[])
{
	int	(*tabptr[4])(int argc, char **argv, int x);

	my_init(tabptr);
	if (argc > 1)
		arguments(tabptr, argc, argv);
	else
		tabptr[0](argc, argv, 1);
	return (0);
}
