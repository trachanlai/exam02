/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_7_sort_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:02:24 by tlai              #+#    #+#             */
/*   Updated: 2024/02/23 14:04:03 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : sort_int_tab
// Expected files   : sort_int_tab.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write the following function:

// void sort_int_tab(int *tab, unsigned int size);

// It must sort (in-place) the 'tab' int array, that contains exactly 'size'
// members, in ascending order.

// Doubles must be preserved.

// Input is always coherent.

void swap(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}


void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int swapped = 1;

	while(swapped == 1)
	{
		i = 1;
		swapped = 0;
		while(i < size)
		{
			if(tab[i - 1] > tab[i])
			{
				swap(&tab[i-1], &tab[i]);
				swapped = 1;
			}
			i++;
		}
	}
}

#include <stdio.h>
int main ()
{
	unsigned int i = 0;
	int tab[] = {1, 5 , 0 , 2};

	sort_int_tab(tab, 4);
		while(i < 4)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}


// // Function to swap the values of two integers
// void	swap_values(int *a, int *b)
// {
// 	int swap = *a;  // Store the value of 'a' in 'swap'
// 	*a = *b;        // Assign the value of 'b' to 'a'
// 	*b = swap;      // Assign the stored value of 'a' from 'swap' to 'b'
// }

// // Function to sort an integer array in ascending order
// void	sort_int_tab(int *tab, unsigned int size)
// {
// 	unsigned int i;  // Declare loop counter
// 	int swapped = 1; // Initialize 'swapped' to 1 to enter the while loop

// 	// Keep looping as long as a swap occurred in the previous pass
// 	while (swapped == 1)
// 	{
// 		i = 1;          // Initialize loop counter to 1 because we're comparing the i-th element with the (i-1)-th
// 		swapped = 0;    // Reset 'swapped' to 0 at the start of each pass

// 		// Iterate over each pair of elements in the array
// 		while (i < size)
// 		{
// 			// If the previous element is greater than the current one, they are in the wrong order
// 			if (tab[i - 1] > tab[i])
// 			{
// 				// Swap tab[i - 1] and tab[i] to put them in the correct order
// 				swap_values(&tab[i - 1], &tab[i]);
// 				swapped = 1;  // Set 'swapped' to 1 because a swap occurred
// 			}
// 			++i;  // Move to the next pair of elements
// 		}
// 	}
// }

// #include <stdio.h>

// void	print_arr(int *tab, unsigned int size)
// {
// 	unsigned int i = 0;
// 	while (i < size)
// 	{
// 		printf("%d, ", tab[i]);
// 		++i;
// 	}
// 	printf("\n");
// }

// int		main(void)
// {
// 	int tab[] = { 5, -4, 3, -2, 1, 0 };
// 	unsigned int size = sizeof(tab) / sizeof(*tab);

// 	print_arr(tab, size);
// 	sort_int_tab(tab, size);
// 	print_arr(tab, size);
// }