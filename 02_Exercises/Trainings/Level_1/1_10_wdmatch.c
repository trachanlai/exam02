/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_10_wdmatch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:44:16 by tlai              #+#    #+#             */
/*   Updated: 2024/02/09 11:50:56 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : wdmatch
// Expected files   : wdmatch.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and checks whether it's possible to
// write the first string with characters from the second string, while respecting
// the order in which these characters appear in the second string.

// If it's possible, the program displays the string, followed by a \n, otherwise
// it simply displays a \n.

// If the number of arguments is not 2, the program displays a \n.

// Examples:

// $>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
// faya$
// $>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
// $
// $>./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat -e
// forty two$
// $>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
// $
// $>./wdmatch | cat -e
// $

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac == 3)
	{
		while(av[2][j] != '\0')
		{
			if(av[2][j] == av[1][i])
				i++;
			j++;
		}
		if(av[1][i] == '\0')
		{
			i = 0;
			while(av[1][i] != '\0')
			{
				write(1, &av[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}





// #include <unistd.h>

// int main(int argc, char const *argv[])
// {
// 	// Check if the number of arguments is 3
// 	if (argc == 3)
// 	{
// 		int i = 0;  // Index for the first string
// 		int j = 0;  // Index for the second string

// 		// Loop through each character in the second string
// 		while (argv[2][j] != '\0')
// 		{
// 			// If the current character in the second string matches the current character in the first string
// 			if (argv[2][j] == argv[1][i])
// 			{
// 				// Move to the next character in the first string
// 				i++;
// 			}
// 			// Move to the next character in the second string
// 			j++;
// 		}
// 		// If we've gone through all characters in the first string
// 		if (argv[1][i] == '\0')
// 		{
// 			// Print the first string
// 			i = 0;
// 			while (argv[1][i])
// 			{
// 				write(1, &argv[1][i], 1);
// 				i++;
// 			}
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return 0;
// }