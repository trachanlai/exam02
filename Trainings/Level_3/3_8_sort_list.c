/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_8_sort_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:04:35 by tlai              #+#    #+#             */
/*   Updated: 2024/02/23 14:37:05 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : sort_list
// Expected files   : sort_list.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write the following functions:

// t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

// This function must sort the list given as a parameter, using the function 
// pointer cmp to select the order to apply, and returns a pointer to the 
// first element of the sorted list.

// Duplications must remain.

// Inputs will always be consistent.

// You must use the type t_list described in the file list.h 
// that is provided to you. You must include that file 
// (#include "list.h"), but you must not turn it in. We will use our own 
// to compile your assignment.

// Functions passed as cmp will always return a value different from 
// 0 if a and b are in the right order, 0 otherwise.

// For example, the following function used as cmp will sort the list 
// in ascending order:

// int ascending(int a, int b)
// {
// 	return (a <= b);
// }


#include "3_8_sort_list.h"


void swap(t_list *a, t_list *b)
{
	int swap = a->data;
	a->data = b->data;
	b->data = swap;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int swapped = 1;
	t_list *head;

	while(swapped == 1)
	{
		head = lst;
		swapped = 0;
		while(head != 0 && head->next != 0)
		{
			if(cmp(head->data, head->next->data) == 0)
			{
				swap(head, head->next);
				swapped = 1;
			}
			head = head->next;
		}
	}
	return(lst);
}






// #include "3_8_sort_list.h"

// void	swap_values(t_list *a, t_list *b)
// {
// 	int swap = a->data;
// 	a->data = b->data;
// 	b->data = swap;
// }


// // Function to sort a linked list using a comparison function
// t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
// {
// 	int swapped = 1;  // Initialize 'swapped' to 1 to enter the while loop
// 	t_list *cur = lst;  // Start from the head of the list

// 	// Keep looping as long as a swap occurred in the previous pass
// 	while (swapped == 1)
// 	{
// 		swapped = 0;  // Reset 'swapped' to 0 at the start of each pass
// 		cur = lst;  // Reset 'cur' to the start of the list for the next pass

// 		// Iterate over each pair of nodes in the list
// 		while (cur != 0 && cur->next != 0)
// 		{
// 			// If the current node and the next node are in the wrong order according to the comparison function
// 			if (cmp(cur->data, cur->next->data) == 0)
// 			{
// 				// Swap the data of the current node and the next node
// 				swap_values(cur, cur->next);
// 				swapped = 1;  // Set 'swapped' to 1 because a swap occurred
// 			}
// 			cur = cur->next;  // Move to the next pair of nodes
// 		}
// 	}
// 	return (lst);  // Return the head of the sorted list
// }


//----------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int ascending(int a, int b)
{
	return (a <= b);
}

int	main(void)
{
	t_list *c = malloc(sizeof(t_list));
	c->next = 0;
	c->data = 45;

	t_list *b = malloc(sizeof(t_list));
	b->next = c;
	b->data = 73;

	t_list *a = malloc(sizeof(t_list));
	a->next = b;
	a->data = 108;

	t_list *cur = a;
	while (cur)
	{
		printf("%d, ", cur->data);
		cur = cur->next;
	}
	printf("\n");

	cur = sort_list(a, ascending);

	// cur = a;
	while (cur)
	{
		printf("%d, ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}