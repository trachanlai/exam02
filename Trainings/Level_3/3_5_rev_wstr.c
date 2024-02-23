/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_5_rev_wstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:15:21 by tlai              #+#    #+#             */
/*   Updated: 2024/02/22 22:15:08 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : rev_wstr
// Expected files   : rev_wstr.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string as a parameter, and prints its words in 
// reverse order.

// A "word" is a part of the string bounded by spaces and/or tabs, or the 
// begin/end of the string.

// If the number of parameters is different from 1, the program will display 
// '\n'.

// In the parameters that are going to be tested, there won't be any "additional" 
// spaces (meaning that there won't be additionnal spaces at the beginning or at 
// the end of the string, and words will always be separated by exactly one space).

// Examples:

// $> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
// ironic? it Isn't gatherings. love I But people! hate You$
// $>./rev_wstr "abcdefghijklm"
// abcdefghijklm
// $> ./rev_wstr "Wingardium Leviosa" | cat -e
// Leviosa Wingardium$
// $> ./rev_wstr | cat -e
// $
// $>


#include <unistd.h>

void	rev_wstr(char *str)
{
	int i = 0;
	int start = 0;
	int space = 1;

	while(str[i])
		i++;
	while(i >= 0)
	{
		while(i >= 0 && (str[i] == '\0' || str[i] == ' ' || str[i] == '\t'))
			i--;
		start = i;
		while(start >= 0 && str[start] != ' ' && str[start] != '\t')
			start--;
		if(space == 0)
			write(1, " ", 1);
		write(1, str + start + 1, i - start);
		space = 0;
		i = start;
	}
}


int main( int ac, char **av)
{
	if(ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
}
















// #include <unistd.h>

// void rev_wstr(char *str)
// {
// 	int i = 0;
// 	int j;
// 	int first_word = 1; // Flag to check if it's the first word

// 	// Move the pointer to the end of the string
// 	while (str[i] != '\0')
// 		++i;

// 	// Start from the end of the string
// 	while (i >= 0)
// 	{
// 		// Skip spaces and tabs
// 		while (i >= 0 && (str[i] == '\0' || str[i] == ' ' || str[i] == '\t'))
// 			--i;
			
// 		// Find the start of the word
// 		j = i;
// 		while (j >= 0 && str[j] != ' ' && str[j] != '\t')
// 			--j;

// 		// If it's not the first word, print a space before the word
// 		if (first_word == 0)
// 			write(1, " ", 1);

// 		// Print the word
// 		write(1, str + j + 1, i - j);

// 		// Set the flag to 0 after printing the first word
// 		first_word = 0;

// 		// Move the pointer to the start of the next word
// 		i = j;
// 	}
// }

// // Main function
// int main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		rev_wstr(argv[1]);
// 	write(1, "\n", 1);

// 	return 0;
// }