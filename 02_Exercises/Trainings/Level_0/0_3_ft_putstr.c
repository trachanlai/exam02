/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_3_ft_putstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:02:26 by tlai              #+#    #+#             */
/*   Updated: 2024/02/21 18:08:38 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_putstr
// Expected files   : ft_putstr.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that displays a string on the standard output.

// The pointer passed to the function contains the address of the string's first
// character.

// Your function must be declared as follows:

#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}








// void ft_putstr(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// }


int main()
{
    char *test_str = "Hello, World!";
    ft_putstr(test_str);
    return 0;
}
