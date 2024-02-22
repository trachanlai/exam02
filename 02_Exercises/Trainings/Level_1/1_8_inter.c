/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_8_inter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:39:40 by tlai              #+#    #+#             */
/*   Updated: 2024/02/08 19:19:14 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : inter
// Expected files   : inter.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and displays, without doubles, the
// characters that appear in both strings, in the order they appear in the first
// one.

// The display will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Examples:

// $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$
// $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6ewg4$
// $>./inter "rien" "cette phrase ne cache rien" | cat -e
// rien$
// $>./inter | cat -e
// $

#include <unistd.h>

int check_double(char c, char *str, int range)
{
	int i = 0;

	while(i < range)
	{
		if (c == str[i])
			return(1);
		i++;
	}
	return(0);
}

int is_in_string(char c, char *str)
{
	int i = 0;

	while(str[i])
	{
		if (c == str[i])
			return(1);
		i++;
	}
	return(0);
}

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 3)
	{
		while (av[1][i])
		{
			if(is_in_string(av[1][i], av[2]) && !check_double(av[1][i], av[1], i))
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
