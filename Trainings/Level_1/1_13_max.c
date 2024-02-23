/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_13_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:07:02 by tlai              #+#    #+#             */
/*   Updated: 2024/02/09 13:39:32 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : max
// Expected files   : max.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following function:

// int		max(int* tab, unsigned int len);

// The first parameter is an array of int, the second is the number of elements in
// the array.

// The function returns the largest number found in the array.

// If the array is empty, the function returns 0.

int		max(int* tab, unsigned int len)
{
	if (len == 0)
		return (0);
	unsigned int i = 1;
	int max = tab[1];
	while(i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

// #include <stdio.h>
// int main ()
// {
// 	int array[] = {1, 2, 5, 10, 6};
// 	printf("%d\n", max(array, 5));
// }