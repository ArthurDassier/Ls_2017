/*
** EPITECH PROJECT, 2017
** hypl.c
** File description:
** blablabla
*/

#include "my.h"

void pr_right(char *str, struct stat sb, struct timespec st_ctim,
	struct dirent* read_fold)
{
	uid_t	uid = getuid();
	struct passwd	*j = getpwuid(uid);
	int	size;
	char	*date;
	struct group	*gname = getpwuid(uid);
	stat(str, &sb);
	size = sb.st_size;
	print_hyp_l(sb);
	my_printf("%d ", sb.st_nlink);
	my_printf("%s ", gname->gr_name);
	my_printf("%s ", j->pw_name);
	my_printf("%d ", size);
	date = ctime(&sb.st_ctime);
	date[my_strlen(date) - 9] = '\0';
	my_printf("%s ", date);
	print_my(&str, str, 1);
}
