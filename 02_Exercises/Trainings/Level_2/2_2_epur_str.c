/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_2_epur_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:57:13 by tlai              #+#    #+#             */
/*   Updated: 2024/02/16 15:09:26 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : epur_str
// Expected files   : epur_str.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string, and displays this string with exactly one
// space between words, with no spaces or tabs either at the beginning or the end,
// followed by a \n.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// If the number of arguments is not 1, or if there are no words to display, the
// program displays \n.

// Example:

// $> ./epur_str "See? It's easy to print the same thing" | cat -e
// See? It's easy to print the same thing$
// $> ./epur_str " this        time it      will     be    more complex  . " | cat -e
// this time it will be more complex .$
// $> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
// $
// $> ./epur_str "" | cat -e
// $
// $>

// $> ./epur_str "vous voyez c'est facile d'afficher la meme chose" | cat -e
// vous voyez c'est facile d'afficher la meme chose$
// $> ./epur_str " seulement          la c'est      plus dur " | cat -e
// seulement la c'est plus dur$
// $> ./epur_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
// $
// $> ./epur_str "" | cat -e
// $
// $>

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int space = 0;

	if (ac == 2)
	{
		while(av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while(av[1][i])
		{
			if(av[1][i] == ' ' || av[1][i] == '\t')
				space = 1;
			else 
			{
				if(space == 1)
					write(1, " ", 1);
				write(1, &av[1][i], 1);
				space = 0;
			}
		i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}

















// #include <unistd.h>

// int main(int argc, char **argv)
// {
// 	int i = 0; // Initialize counter
// 	int space = 0; // Initialize space flag

// 	// If there is exactly one argument
// 	if (argc == 2)
// 	{
// 		// Skip leading spaces and tabs of first word
// 		while (argv[1][i] == ' ' || argv[1][i] == '\t')
// 			i++;
// 		while (argv[1][i])
// 		{
// 			// If the character is a space or a tab
// 			if (argv[1][i] == ' ' || argv[1][i] == '\t')
// 				space = 1; // Set the space flag
// 			else
// 			{
// 				// If the previous character was a space or a tab
// 				if (space == 1)
// 					write(1, " ", 1); // Write a single space
// 				// Write the current character
// 				write(1, &argv[1][i], 1);
// 				// Reset the space flag
// 				space = 0;
// 			}
// 			// Move to the next character
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }