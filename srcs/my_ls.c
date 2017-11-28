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
	char	*str = "lrR";

	while (str[i] != flag && str[i] != '\0') {
		i++;
	}
	if (str[i] == '\0')
		return (0);
	else
		return (i);
}

static void my_init(int (*PointeursurFonction[2])(int argc, char **argv))
{
	PointeursurFonction[0] = &base_ls;
	PointeursurFonction[1] = &case_l;
}

int arguments(int (*PointeursurFonction[2])(int argc, char **argv),
int argc, char **argv)
{
	int	i = 0;
	int	p;

	for (int j = 1; j < argc; j++) {
		if (argv[i][j] == '-') {
			p = argv_parser(argv[i][j]);
			PointeursurFonction[p](argc, argv);
		} else
			PointeursurFonction[0](argc, argv);
	}
	return(0);
}

int main(int argc, char *argv[])
{
	int	(*PointeursurFonction[2])(int argc, char **argv);

	my_init(PointeursurFonction);
	if (argc > 1)
		arguments(PointeursurFonction, argc, argv);
	else
		PointeursurFonction[0](argc, argv);
	return (0);
}
