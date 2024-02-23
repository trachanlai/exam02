/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_6_rostring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai <tlai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:15:54 by tlai              #+#    #+#             */
/*   Updated: 2024/02/23 13:01:18 by tlai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : rostring
// Expected files   : rostring.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays this string after rotating it
// one word to the left.

// Thus, the first word becomes the last, and others stay in the same order.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// Words will be separated by only one space in the output.

// If there's less than one argument, the program displays \n.

// Example:

// $>./rostring "abc   " | cat -e
// abc$
// $>
// $>./rostring "Que la      lumiere soit et la lumiere fut"
// la lumiere soit et la lumiere fut Que
// $>
// $>./rostring "     AkjhZ zLKIJz , 23y"
// zLKIJz , 23y AkjhZ
// $>
// $>./rostring "first" "2" "11000000"
// first
// $>
// $>./rostring | cat -e
// $
// $>

#include <unistd.h>

void rostring(char *str)
{
	int i = 0;
	int fw_start = 0;
	int fw_end = 0;
	int start = 0;
	int end = 0;

	while(str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	fw_start = i;
	while(str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	fw_end = i;
	while(str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while(str[i])
	{
		if(str[i] && str[i] != ' ' && str[i] != '\t')
			start = i;
		while(str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		end = i;
		write(1, str + start, end - start);
		write(1, " ", 1);
		while(str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
	}
	if(fw_start < fw_end)
		write(1, str + fw_start, fw_end - fw_start);
}

int main(int ac, char **av)
{
	if (ac > 1)
		rostring(av[1]);
	write(1, "\n", 1);
}












// #include <unistd.h>

// void rostring(char *str)
// {
// 	int i = 0;
// 	int start = 0;
// 	int end = 0;
// 	int first_word_start = 0;
// 	int first_word_end = 0;

// 	// Skip leading spaces or tabs
// 	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
// 		i++;

// 	// Mark the start of the first word
// 	first_word_start = i;

// 	// Find the end of the first word
// 	while (str[i] && str[i] != ' ' && str[i] != '\t')
// 		i++;
// 	first_word_end = i;

// 	// Skip spaces and tabs after the first word
// 	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
// 		i++;

// 	// Process the rest of the string
// 	while(str[i])
// 	{
// 		// Mark the start of the word
// 		start = i;

// 		// Find the end of the word
// 		while (str[i] && str[i] != ' ' && str[i] != '\t')
// 			i++;
// 		end = i;

// 		// Print the word
// 		write(1, str + start, end - start);

// 		// Print a space after the word
// 		write(1, " ", 1);

// 		// Skip spaces and tabs after the word
// 		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
// 			i++;
// 	}

// 	// If the first word exists, print it
// 	if(first_word_end > first_word_start)
// 		write(1, str + first_word_start, first_word_end - first_word_start);
// }


// int main(int ac, char **av)
// {
// 	if(ac > 1)
// 		rostring(av[1]);
// 	write(1, "\n", 1);
// }
