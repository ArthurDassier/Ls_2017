/*
** EPITECH PROJECT, 2017
** hypr.c
** File description:
** blabla
*/

#include "my.h"

int base_rr(int argc, char **argv, int x)
{

	return(0);
}

char type(struct stat sb)
{
	char	type;

	if (S_ISREG(sb.st_mode))
		type = '-';
	if (S_ISDIR(sb.st_mode))
		type = 'd';
	if (S_ISCHR(sb.st_mode))
		type = 'c';
	if (S_ISLNK(sb.st_mode))
		type = 'l';
	if(S_ISSOCK(sb.st_mode))
		type = 's';
	if(S_ISBLK(sb.st_mode))
		type = 'b';
	return(type);
}
