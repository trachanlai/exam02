/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_9_union.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:20:02 by tlai              #+#    #+#             */
/*   Updated: 2024/02/08 19:43:33 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : union
// Expected files   : union.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and displays, without doubles, the
// characters that appear in either one of the strings.

// The display will be in the order characters appear in the command line, and
// will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Example:

// $>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// zpadintoqefwjy$
// $>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6vewg4thras$
// $>./union "rien" "cette phrase ne cache rien" | cat -e
// rienct phas$
// $>./union | cat -e
// $
// $>
// $>./union "rien" | cat -e
// $
// $>

#include <unistd.h>

int check_double(char c, char *str, int range)
{
	int i = 0;

	while(i < range)
	{
		if(c == str[i])
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
		while(av[1][i])
		{
			if(!check_double(av[1][i], av[1], i))
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while(av[2][i])
		{
			if(!check_double(av[2][i], av[1], i) && !check_double(av[2][i], av[2], i))
				write(1, &av[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}








// #include <unistd.h>

// int check_double(char c, char *str, int range)
// {
// 	int i = 0;

// 	while (i < range)
// 	{
// 		if (str[i] == c)
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }



// int main(int ac, char **av)
// {
// 	int i = 0;

// 	if (ac == 3)
// 	{
// /*
// while (av[1][i]): This is a loop that goes through each character of the first string. 
// For each character, it checks if the character has already appeared in the string up to the current position. 

// while (av[2][i]): This is a similar loop for the second string 
// It checks if the character has already appeared in 
// either the first string (av[2][i], av[1], i)) or the second string ((av[2][i], av[2], i)) up to the current position.
// */
// 		while (av[1][i])
// 		{
// 			if (!check_double(av[1][i], av[1], i))
// 				write(1, &av[1][i], 1);
// 			i++;
// 		}
// 		i = 0;
// 		while (av[2][i])
// 		{
// 			if (!check_double(av[2][i], av[1], i) && !check_double(av[2][i], av[2], i))
// 				write(1, &av[2][i], 1);
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }
