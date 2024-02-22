/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_6_ft_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:22:29 by tlai              #+#    #+#             */
/*   Updated: 2024/02/21 18:24:40 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that swaps the contents of two integers the adresses of which
// are passed as parameters.

// Your function must be declared as follows:

// void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}












// void ft_swap(int *a, int *b)
// {
// 	int temp;

// 	temp = *a;
// 	*a = *b;
// 	*b = temp;
// }

#include <stdio.h>

int main()
{
    int a = 5;
    int b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);

    ft_swap(&a, &b);

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}