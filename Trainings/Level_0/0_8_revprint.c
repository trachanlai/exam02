/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_8_revprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:47:40 by tlai              #+#    #+#             */
/*   Updated: 2024/02/22 10:03:53 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : rev_print
// Expected files   : rev_print.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string, and displays the string in reverse
// followed by a newline.

// If the number of parameters is not 1, the program displays a newline.

// Examples:

// $> ./rev_print "zaz" | cat -e
// zaz$
// $> ./rev_print "dub0 a POIL" | cat -e
// LIOP a 0bud$
// $> ./rev_print | cat -e
// $

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	char *str = av[1];

	if (ac == 2)
	{
		while(str[i])
			i++;
		while(i >= 1)
		{
			write(1, &str[i - 1], 1);
			i--;
		}
	}
	write(1, "\n", 1);
}




















// int main(int ac, char **av)
// {
// 	int i;

// 	i = 0;
// 	if (ac == 2)
// 	{
// 		while(av[1][i] != '\0')
// 			i++;
// 		while (i >= 1)
// 		{
// 			write(1, &av[1][i-1], 1);
// 			i--;
// 		}
// 	}
// 	write(1, "\n", 1);
// }