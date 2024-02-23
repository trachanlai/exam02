/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_14_last_word.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:40:14 by tlai              #+#    #+#             */
/*   Updated: 2024/02/22 11:08:13 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : last_word
// Expected files   : last_word.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays its last word followed by a \n.

// A word is a section of string delimited by spaces/tabs or by the start/end of
// the string.

// If the number of parameters is not 1, or there are no words, display a newline.

// Example:

// $> ./last_word "FOR PONY" | cat -e
// PONY$
// $> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
// not$
// $> ./last_word "   " | cat -e
// $
// $> ./last_word "a" "b" | cat -e
// $
// $> ./last_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int end = 0;
	int start = 0;
	char *str = av[1];

	if(ac == 2)
	{
		while(str[i])
		{
			if(str[i] != ' ' && str[i] != '\t')
			{
				start = i;
				while(str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
					i++;
				end = i;
			}
			else
				i++;
		}
		write(1, str + start, end - start);
	}
	write(1, "\n", 1);
}









// #include <unistd.h>

// int main(int ac, char **av)
// {
// 	int i = 0; // Index for traversing the string
// 	int start = 0; // Start index of the last word
// 	int end = 0; // End index of the last word
// 	char *str = av[1]; // The input string

// 	// Check if the number of arguments is 2
// 	if (ac == 2)
// 	{
// 		// Traverse the string
// 		while (str[i] != '\0')
// 		{
// 			// If the current character is not a space or a tab, it might be the start of a word
// 			if(str[i] != ' ' && str[i] != '\t')
// 			{
// 				start = i; // Set the start index of the word
// 				// Traverse the word until a space, a tab, or the end of the string is encountered
// 				while(str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
// 					i++;
// 				end = i; // Set the end index of the word
// 			}
// 			else 
// 				i++; // If the current character is a space or a tab, move to the next character
// 		}
// 		write(1, str + start, end - start);
// 	}
// 	write(1, "\n", 1);
// 	return(0);
// }
