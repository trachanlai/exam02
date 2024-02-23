/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_10_paramsum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:28:40 by tlai              #+#    #+#             */
/*   Updated: 2024/02/20 17:37:14 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : paramsum
// Expected files   : paramsum.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays the number of arguments passed to it, followed by
// a newline.

// If there are no arguments, just display a 0 followed by a newline.

// Example:

// $>./paramsum 1 2 3 5 7 24
// 6
// $>./paramsum 6 12 24 | cat -e
// 3$
// $>./paramsum | cat -e
// 0$
// $>

#include <unistd.h>

void ft_putnbr(int n)
{
	if(n >= 10)
		ft_putnbr(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

int main(int ac, char **av)
{
	(void)av;
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
}


// #include <unistd.h> 

// // Function to print an integer to the standard output
// void	ft_putnbr(int n)
// {
// 	if (n >= 10)
// 		ft_putnbr(n / 10);
// 	// Calculate the value of the current digit and convert it to its character representation
// 	char digit = (n % 10) + '0';
// 	write(1, &digit, 1);
// }


// int		main(int argc, char **argv)
// {
// 	(void)argv;	 // Silence 'unused parameter' error
// 	// Call ft_putnbr to print the number of command-line arguments (excluding the program name)
// 	ft_putnbr(argc - 1);
// 	write(1, "\n", 1);
// 	return (0);
// }
