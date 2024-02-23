/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_12_search_replace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:40:45 by tlai              #+#    #+#             */
/*   Updated: 2024/02/22 10:23:29 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : search_and_replace
// Expected files   : search_and_replace.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program called search_and_replace that takes 3 arguments, the first
// arguments is a string in which to replace a letter (2nd argument) by
// another one (3rd argument).

// If the number of arguments is not 3, just display a newline.

// If the second argument is not contained in the first one (the string)
// then the program simply rewrites the string followed by a newline.

// Examples:
// $>./search_and_replace "Papache est un sabre" "a" "o"
// Popoche est un sobre
// $>./search_and_replace "zaz" "art" "zul" | cat -e
// $
// $>./search_and_replace "zaz" "r" "u" | cat -e
// zaz$
// $>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
// $
// $>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
// ZaZ eT David aiME le METal.$
// $>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
// eNcOre Un ExEmPle Pas Facile a Ecrire $

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 4)
	{
		while(av[1][i])
		{
			if(((av[2][0] >= 'a' && av[2][0] <= 'z') || (av[2][0] >= 'A' && av[2][0] <= 'Z')) && av[2][1] == '\0')
			{
				if(((av[3][0] >= 'a' && av[3][0] <= 'z') || (av[3][0] >= 'A' && av[3][0] <= 'Z')) && av[3][1] == '\0')
				{
					if(av[1][i] == av[2][0])
						av[1][i] = av[3][0];
				}
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
















// #include <unistd.h>

// int main(int ac, char **av)
// {
// 	int i = 0;
	
// 	// Check if the number of arguments is 4
// 	if(ac == 4)
// 	{
// 		// Check if the second argument is a single letter
// 		if (((av[2][0] >= 'a' && av[2][0] <= 'z') || (av[2][0] >= 'A' && av[2][0] <= 'Z')) && av[2][1] == '\0')
// 		{
// 			// Check if the third argument is a single letter
// 			if (((av[3][0] >= 'a' && av[3][0] <= 'z') || (av[3][0] >= 'A' && av[3][0] <= 'Z')) && av[3][1] == '\0')
// 			{
// 				// Loop through the first argument
// 				while(av[1][i] != '\0')
// 				{
// 					// If the current character matches the second argument, replace it with the third argument
// 					if(av[1][i] == av[2][0])
// 						av[1][i] = av[3][0];
// 					// Write the current character to the standard output
// 					write(1, &av[1][i], 1);
// 					i++;
// 				}
// 			}
// 		}
// 	}
// 	// Write a newline character to the standard output
// 	write(1, "\n", 1);
// }