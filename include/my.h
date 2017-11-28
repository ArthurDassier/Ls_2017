/*
** EPITECH PROJECT, 2017
** ANTI-WARNING
** File description:
** mes prototypes
*/

#ifndef MYLIB_H
#define MYLIB_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/sysmacros.h>
#include <unistd.h>
#include <dirent.h>
#include "printf.h"
#include "struct.h"
#include "ls.h"

void my_putchar (char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
void my_putstr (char const *str);
int my_strlen (char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
int my_strcmp(char *s1, char *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strcat(char *dest, char const *src);
int my_put_nbr_base(int nb, char *base);
long my_put_nbr_base_long(long long nb, char *base);
Chainlist *init(char *data);
void insert_begin(Chainlist **first_elem, char *data);
void insert_end(Chainlist **first_elem, char *data);
void print_list(Chainlist *first_elem);

#endif /* protection double declaration */
