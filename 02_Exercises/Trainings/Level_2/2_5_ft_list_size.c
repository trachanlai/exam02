/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_5_ft_list_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:20:03 by tlai              #+#    #+#             */
/*   Updated: 2024/02/16 16:38:49 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_list_size
// Expected files   : ft_list_size.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that returns the number of elements in the linked list that's
// passed to it.

// It must be declared as follows:

// int	ft_list_size(t_list *begin_list);

// You must use the following structure in your program ft_list_size.c :

// typedef struct    s_list
// {
//     struct s_list *next;
//     void          *data;
// }                 t_list;

// for NULL pointer
#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	int i = 0;

	while(begin_list != NULL)
	{
		i++;
		begin_list = begin_list->next;
	}
	return(i);
}








// Define the structure for a node in the list
// typedef struct    s_list
// {
// 	struct s_list *next;  // Pointer to the next node in the list
// 	void          *data;  // Pointer to the data held by this node
// }                 t_list;

// // Function to count the number of nodes in the list
// int	ft_list_size(t_list *begin_list)
// {
// 	// Initialize a counter to 0
// 	int count = 0;

// 	// Start at the beginning of the list
// 	t_list *current = begin_list;

// 	// Traverse the list
// 	while (current != NULL)
// 	{
// 		// For each node in the list, increment the counter
// 		count++;

// 		// Move to the next node
// 		current = current->next;
// 	}

// 	// When you reach the end of the list, return the counter
// 	return count;
// }


#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Create nodes
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
	t_list *node4 = malloc(sizeof(t_list));

    // Link nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
	node4->next = NULL;

    // Test ft_list_size
    printf("Size of the list: %d\n", ft_list_size(node1));

    // Free nodes
    free(node1);
    free(node2);
    free(node3);
	free(node4);
    return 0;
}