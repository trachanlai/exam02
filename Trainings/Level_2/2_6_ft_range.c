/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_6_ft_range.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:39:36 by tlai              #+#    #+#             */
/*   Updated: 2024/02/20 12:54:49 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_range
// Expected files   : ft_range.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_range(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at start and end at end (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 1, 2 and 3.
// - With (-1, 2) you will return an array containing -1, 0, 1 and 2.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing 0, -1, -2 and -3.

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int size = 0;
	int i = 0;

	if(start > end)
		size = start - end + 1;
	else
		size = end - start + 1;
	int *array = malloc(size * sizeof(int));
	if(array == NULL)
		return NULL;
	while(i < size)
	{
		if (start < end)
		{
			array[i] = start;
			start++;
		}
		else
		{
			array[i] = start;
			start--;
		}
		i++;
	}
	return(array);
}




// #include <stdio.h>

// int main()
// {
// 	int start = 0;
// 	int end = 0;
// 	int *array = ft_range(start, end);

// 	int i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", array[i]);
// 		i++;
// 	}
// 	return (0);
// }
