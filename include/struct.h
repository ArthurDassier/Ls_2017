/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** mes_structures
*/

#ifndef STRUCT_H
#define STRUCT_H

#include "my.h"
typedef struct Chainlist Chainlist;

struct Chainlist
{
	char *str;
	Chainlist *next;
};

#endif
