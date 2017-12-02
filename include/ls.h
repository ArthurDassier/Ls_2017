/*
** EPITECH PROJECT, 2017
** ls.h
** File description:
** declar
*/

#ifndef LS_H
#define LS_H

int base_ls(int argc, char **argv, int x);
int hyp_l(int argc, char **argv, int x);
void print_my(char **str, char *argv, int nb);
static int argv_parser(char flag);
int mult_path(int (*PointeursurFonction[4])(int argc, char **argv, int x),
	int argc, char **argv, int j);
void print_hyp_l(struct stat fileStat);
void pr_right(char *str, struct stat sb, struct timespec st_ctim,
	struct dirent* read_fold);
void print_r(char **str, char *argv, int nb);
int base_r(int argc, char **argv, int x);
int base_rr(int argc, char **argv, int x);
int base_d(int argc, char **argv, int x);
char *thecat(struct dirent* rd_fld, int argc, char **argv, int x);

#endif
