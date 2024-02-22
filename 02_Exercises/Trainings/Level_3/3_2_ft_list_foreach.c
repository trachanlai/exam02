/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_2_ft_list_foreach.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:23:15 by tlai              #+#    #+#             */
/*   Updated: 2024/02/21 14:49:29 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_list_foreach
// Expected files   : ft_list_foreach.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that takes a list and a function pointer, and applies this
// function to each element of the list.

// It must be declared as follows:

// void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

// The function pointed to by f will be used as follows:

// (*f)(list_ptr->data);

// You must use the following structure, and turn it in your file ft_list_foreach.c :

// typedef struct    s_list
// {
//     struct s_list *next;
//     void          *data;
// }                 t_list;


typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if(begin_list == 0)
		return;
	while(begin_list != 0)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}




// The function takes two parameters: a pointer to the first node of a linked list, and a pointer to a function.
// void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
// {
// 	// If the list is empty (begin_list is NULL), the function immediately returns.
// 	if (begin_list == 0)
// 		return;
	
// 	// This is a loop that goes through each node of the list.
// 	while (begin_list != 0)
// 	{
// 		// The function pointed to by 'f' is called with the data of the current node.
// 		f(begin_list->data);
		
// 		// The pointer is moved to the next node in the list.
// 		begin_list = begin_list->next;
// 	}
// }

#include <stdlib.h>
#include <stdio.h>

void	int_doubler(void *n)
{
	int *num = (int *)n;
	*num = *num * 2;
}

int		main(void)
{
	t_list *pt_a = malloc(sizeof(t_list));
	int	n_a = 0;
	pt_a->data = &n_a;
	pt_a->next = 0;

	t_list *pt_b = malloc(sizeof(t_list));
	int	n_b = 3;
	pt_b->data = &n_b;
	pt_b->next = 0;

	t_list *pt_c = malloc(sizeof(t_list));
	int	n_c = 4;
	pt_c->data = &n_c;
	pt_c->next = 0;

	pt_a->next = pt_b;
	pt_b->next = pt_c;

	t_list *cur = pt_a;
	while (cur != 0)
	{
		printf("%d, ", *(int *)(cur->data));
		cur = cur->next;
	}
	printf("\n");

	ft_list_foreach(pt_a, int_doubler);

	cur = pt_a;
	while (cur != 0)
	{
		printf("%d, ", *(int *)(cur->data));
		cur = cur->next;
	}
	printf("\n");
}