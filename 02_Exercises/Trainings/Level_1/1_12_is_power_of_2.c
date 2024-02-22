/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_12_is_power_of_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:45:55 by tlai              #+#    #+#             */
/*   Updated: 2024/02/09 13:06:54 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : is_power_of_2
// Expected files   : is_power_of_2.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that determines if a given number is a power of 2.

// This function returns 1 if the given number is a power of 2, otherwise it returns 0.

// Your function must be declared as follows:

// int	    is_power_of_2(unsigned int n);


int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	if (n == 1)
		return (1);
	else
		return(0);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", is_power_of_2(16));
// }
