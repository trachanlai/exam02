/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_7_ft_rrange.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:55:15 by tlai              #+#    #+#             */
/*   Updated: 2024/02/20 13:08:42 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_rrange
// Expected files   : ft_rrange.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_rrange(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at end and end at start (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 3, 2 and 1
// - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing -3, -2, -1 and 0.

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int size = 0;
	int i = 0;

	if(start > end)
		size = start - end + 1;
	else
		size = end - start + 1;
	int *array = malloc(size * sizeof(int));
	if(array == NULL)
		return(NULL);
	while(i < size)
	{
		if(start < end)
		{
			array[i] = end;
			end--;
		}
		else
		{
			array[i] = end;
			end++;
		} 
		i++;
	}
	return(array);
}

#include <stdio.h>

int main()
{
	int start = 1;
	int end = 3;
	int *array = ft_rrange(start, end);

	// if (array == NULL)
	// {
	// 	printf("Memory allocation failed\n");
	// 	return 1;
	// }

	int size;
	if (start > end)
		size = start - end + 1;
	else
		size = end - start + 1;

	int i = 0;
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}

	free(array);  // Don't forget to free the allocated memory

	return 0;
}