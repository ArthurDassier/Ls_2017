/*
** EPITECH PROJECT, 2017
** my_ls.c
** File description:
** blabla
*/

#include "my.h"

static void my_init(int (*PointeursurFonction[1])(char *argv))
{
	PointeursurFonction[0] = &base_ls;
}

int main(int argc, char *argv[])
{
	int	(*PointeursurFonction[1])(char *argv);
	my_init(PointeursurFonction);
	PointeursurFonction[0](*argv);
	return (0);
}