#ifndef N_LST_H
#define N_LST_H

// Includes

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef	struct	l_list
{
	void	*content;
	struct l_list	*next;
} n_list;

n_list  *lstnew(void *content);
// Void Return
void lstadd_back();

#endif